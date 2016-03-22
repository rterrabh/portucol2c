flex scanner.l
bison -dy parser.y
gcc lex.yy.c y.tab.c -o portucol2c.exe