Remove-Item -Recurse gen/
antlr4 -Dlanguage=JavaScript .\S.g4 -o gen
node main_S.js