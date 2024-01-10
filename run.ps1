Remove-Item -Recurse gen/
antlr4 -Dlanguage=JavaScript .\C.g4 -o gen
node main.js