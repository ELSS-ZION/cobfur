rm -rf gen/
antlr4 -Dlanguage=JavaScript ./C.g4 -o gen
node main.js