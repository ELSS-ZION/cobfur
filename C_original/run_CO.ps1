Remove-Item -Recurse gen/
antlr4 -Dlanguage=JavaScript .\CO.g4 -o gen
node main_CO.js