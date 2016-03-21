yacc -d -o parser.tab.c parser.y
flex -o scanner.yy.c scanner.l
gcc -o portucol2c scanner.yy.c parser.tab.c -ly -ll