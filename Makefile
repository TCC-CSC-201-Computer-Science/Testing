SRC=readAddressBook01

all:latest

compile:
	rm -f ./a.out
	g++ "$(SRC)".cpp

run:
	./a.out



latest:
	file=`ls -tr *cpp | tail -1` ;\
	make SRC="`basename \"$$file\" .cpp`" compile run
