Remove-Item -Recurse gen/
antlr4 -Dlanguage=Java .\C.g4 -o gen
# node main.js