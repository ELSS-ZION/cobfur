import antlr4 from 'antlr4';
import CLexer from './gen/CLexer.js';
import CParser from './gen/CParser.js';
import CListener from './gen/CListener.js';
import fs from 'fs';
import { ZCrypt } from './obf.js'

let lexer
let originalText
let count = 0

class MyListener extends CListener {
    constructor(tokenStream) {
        super();
        this.rewriter = new antlr4.TokenStreamRewriter(tokenStream)
    }

    enterDeclaration(ctx) {
        let result = this.findStringLiteral(ctx)
        if (result == undefined) {
            return
        }

        let originalStatement = originalText.substring(ctx.start.start, ctx.stop.stop)

        console.log(`foundStringLiteral: ${result} in declaration: ${originalStatement}`)
        ctx.foundStringLiteral = result

        let i = ctx.start.start - 1
        let indent = ''

        while(true) {
            if (originalText[i].match(/[^\S\n]/) == undefined) {
                break
            }
            indent += originalText[i]
            i--
        }

        console.log(`~${indent}~`)

        var crypted = ZCrypt.cryptstr(result.replace('"', ''), `__s${count}__`, indent);
        console.log(crypted);

        this.rewriter.replace(ctx.start, ctx.stop, `${crypted}${indent}${originalStatement.replace(result, `__s${count}__`)};`)
        count++
	}

    enterStatement(ctx) {
        let result = this.findStringLiteral(ctx)
        if (result == undefined) {
            return
        }

        let originalStatement = originalText.substring(ctx.start.start, ctx.stop.stop)

        console.log(`foundStringLiteral: ${result} in declaration: ${originalStatement}`)
        ctx.foundStringLiteral = result

        let i = ctx.start.start - 1
        let indent = ''

        while(true) {
            if (originalText[i].match(/[^\S\n]/) == undefined) {
                break
            }
            indent += originalText[i]
            i--
        }

        console.log(`~${indent}~`)

        var crypted = ZCrypt.cryptstr(result.replace('"', ''), `__s${count}__`, indent);
        console.log(crypted);

        this.rewriter.replace(ctx.start, ctx.stop, `${crypted}${indent}${originalStatement.replace(result, `__s${count}__`)};`)
        count++
    }

    findStringLiteral(ctx) {
        if (ctx == null) {
            return
        }

        if (ctx.start?.type == CLexer.StringLiteral) {
            let result = ''
            for (const i in ctx.children) {
                const e = ctx.children[i]
                if (e.start?.type  == CLexer.StringLiteral) {
                    result += e.getText()
                }
            }
            return result
        }

        for (const i in ctx.children) {
            const e = ctx.children[i]
            let result = this.findStringLiteral(e)
            if (result != undefined) {
                return result
            }
        }
        return
    }
}

const insertAt = (str, sub, pos) => `${str.slice(0, pos)}${sub}${str.slice(pos)}`;

fs.readFile('main.c', { encoding: 'utf8' }, (err, data) => {
    if (err) {
        console.error(err);
        return;
    }
    originalText = data
    const input = data
    const chars = new antlr4.InputStream(input);
    lexer = new CLexer(chars);
    lexer.strictMode = false;
    const tokens = new antlr4.CommonTokenStream(lexer);
    const parser = new CParser(tokens);
    const tree = parser.compilationUnit()
    const lsnr = new MyListener(tokens);
    antlr4.tree.ParseTreeWalker.DEFAULT.walk(lsnr, tree);

    // let result = tree.getText()

    // for (const key in lexer.spaceDict) {
    //     result = insertAt(result, lexer.spaceDict[key], key)
    // }

    // fs.writeFile('output.c', result, (err) => {
    //     if (err) throw err;
    // });

    let result = lsnr.rewriter.getText()
    fs.writeFile('output.c', result, (err) => {
        if (err) throw err;
    });

});



