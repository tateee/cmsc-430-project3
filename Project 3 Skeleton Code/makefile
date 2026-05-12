compile: scanner.o parser.o listing.o values.o hex.o charlit.o
	g++ -o compile scanner.o parser.o listing.o values.o hex.o charlit.o
	
scanner.o: scanner.c values.h listing.h tokens.h
	g++ -c scanner.c

scanner.c: scanner.l	
	flex scanner.l
	mv lex.yy.c scanner.c

parser.o: parser.c values.h listing.h symbols.h
	g++ -c parser.c

parser.c tokens.h: parser.y
	bison -d -v parser.y
	mv parser.tab.c parser.c
	cp parser.tab.h tokens.h

listing.o: listing.cc listing.h
	g++ -c listing.cc

values.o: values.cc values.h
	g++ -c values.cc

hex.o: hex.cc hex.h
	g++ -c hex.cc

charlit.o: charlit.cc charlit.h
	g++ -c charlit.cc

clean:
	rm -f *.o compile parser.c tokens.h scanner.c parser.output