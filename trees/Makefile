OBJ = main.o albero.o stringa.o codaBfs.o

alberoProva: $(OBJ)
	g++ -o $@ $(OBJ)

-include dependencies

.PHONY: clean cleanall
depend:
	g++ -MM *.cc > dependencies
clean:
	rm -f *.o
cleanall:
	rm -f $@ *.o