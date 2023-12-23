Remove-Item -Recurse gen/
antlr4 -Dlanguage=Java .\Hello.g4 -o gen
# node main.jsd