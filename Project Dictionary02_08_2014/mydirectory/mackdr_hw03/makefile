GPP = g++ -O3 -Wall

UTILS = ../../Utilities

M = Main.o
STOP = Stoplist.o
I = Index.o
W = Word.o
#SL = ScanLine.o
S = Scanner.o
U = Utils.o
Aprog: $(M) $(STOP) $(I) $(W) $(SL) $(S) $(U)
	$(GPP) -o Aprog $(M) $(STOP) $(I) $(W) $(SL) $(S) $(U)

Main.o: Main.h Main.cpp
	$(GPP) -o Main.o -c -DEBUGMAIN Main.cpp

Stoplist.o: Stoplist.h Stoplist.cpp
	$(GPP) -o Stoplist.o -c -DEBUGSTOP Stoplist.cpp

Index.o: Index.h Index.cpp
	$(GPP) -o Index.o -c -DEBUGINDEX Index.cpp

Word.o: Word.h Word.cpp
	$(GPP) -o Word.o -c -DEBUGWORD Word.cpp

ScanLine.o: $(UTILS)/ScanLine.h $(UTILS)/ScanLine.cpp
	$(GPP) -o ScanLine.o -c $(UTILS)/ScanLine.cpp

Scanner.o: $(UTILS)/Scanner.h $(UTILS)/Scanner.cpp
	$(GPP) -o Scanner.o -c $(UTILS)/Scanner.cpp

Utils.o: $(UTILS)/Utils.h $(UTILS)/Utils.cpp
	$(GPP) -o Utils.o -c $(UTILS)/Utils.cpp

clean:
	rm Aprog
	clean

