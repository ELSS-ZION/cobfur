import antlr4 from 'antlr4';
import CLexer from './gen/CLexer.js';
import CParser from './gen/CParser.js';
import CListener from './gen/CListener.js';
import fs from 'fs';


class MyListener extends CListener {
    constructor() {
        super();
    }

    // enterCompilationUnit(ctx) { y
    // enterConstantExpression(ctx) { n
    // enterExpression(ctx) { n
    // enterArgumentExpressionList(ctx) { n
    // enterCompoundStatement(ctx) { n
    enterTranslationUnit(ctx) {
        console.log(ctx.getText())
	}

}

const insertAt = (str, sub, pos) => `${str.slice(0, pos)}${sub}${str.slice(pos)}`;

fs.readFile('main.c', { encoding: 'utf8' }, (err, data) => {
    if (err) {
        console.error(err);
        return;
    }
    // console.log(data);
    const input = data
    const chars = new antlr4.InputStream(input);
    CLexer.prototype.handleSpace = () => {
        console.log(`Newline `, this._tokenStartCharIndex, this.spaceDict, this.text)
        if (this.spaceDict == undefined) {
            this.spaceDict = {}
        } 
        this.spaceDict[this._tokenStartCharIndex] = this.text
    }

    const lexer = new CLexer(chars);
    

    const tokens = new antlr4.CommonTokenStream(lexer);

    const parser = new CParser(tokens);
    const tree = parser.compilationUnit()
    const lsnr = new MyListener();
    antlr4.tree.ParseTreeWalker.DEFAULT.walk(lsnr, tree);
    // console.log(tree.getText())

    console.log(`lexer.indexArray: ${lexer.indexArray}`)

    let result = tree.getText()

    for (const key in lexer.spaceDict) {
        result = insertAt(result, lexer.spaceDict[key], key)
    }

    fs.writeFile('output.c', result, (err) => {
        if (err) throw err;
      });
});



