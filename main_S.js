import antlr4 from 'antlr4';
import CLexer from './gen/SLexer.js';
import CParser from './gen/SParser.js';
import CListener from './gen/SListener.js';
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
    // enterTranslationUnit(ctx) {
    //     console.log(ctx.getText())
	// }

}


fs.readFile('main.c', { encoding: 'utf8' }, (err, data) => {
    if (err) {
        console.error(err);
        return;
    }
    // console.log(data);
    // const input = data
    // const input = "(()))(()))"
    const input = "((()()()))((()())(()()))"
    const chars = new antlr4.InputStream(input);
    const lexer = new CLexer(chars);
    const tokens = new antlr4.CommonTokenStream(lexer);

    const parser = new CParser(tokens);
    const tree = parser.nested_query()
    const lsnr = new MyListener();
    antlr4.tree.ParseTreeWalker.DEFAULT.walk(lsnr, tree);
    // console.log(tree.getText())

    fs.writeFile('output.c', tree.getText(), (err) => {
        if (err) throw err;
      });
});



