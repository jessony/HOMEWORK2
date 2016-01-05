# Project: 项目1
# Makefile created by Dev-C++ 5.11

CPP      = g++.exe -D__DEBUG__
CC       = gcc.exe -D__DEBUG__
WINDRES  = windres.exe
OBJ      = main.o segement.o frame.o point.o solver.o
LINKOBJ  = main.o segement.o frame.o point.o solver.o
LIBS     = -L"F:/devC++/install/MinGW64/lib" -L"F:/devC++/install/MinGW64/x86_64-w64-mingw32/lib" -static-libgcc -g3
INCS     = -I"F:/devC++/install/MinGW64/include" -I"F:/devC++/install/MinGW64/x86_64-w64-mingw32/include" -I"F:/devC++/install/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include"
CXXINCS  = -I"F:/devC++/install/MinGW64/include" -I"F:/devC++/install/MinGW64/x86_64-w64-mingw32/include" -I"F:/devC++/install/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include" -I"F:/devC++/install/MinGW64/lib/gcc/x86_64-w64-mingw32/4.9.2/include/c++"
BIN      = coffeeroom.exe
CXXFLAGS = $(CXXINCS) -g3
CFLAGS   = $(INCS) -g3
RM       = rm.exe -f

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CXXFLAGS)

segement.o: segement.cpp
	$(CPP) -c segement.cpp -o segement.o $(CXXFLAGS)

frame.o: frame.cpp
	$(CPP) -c frame.cpp -o frame.o $(CXXFLAGS)

point.o: point.cpp
	$(CPP) -c point.cpp -o point.o $(CXXFLAGS)

solver.o: solver.cpp
	$(CPP) -c solver.cpp -o solver.o $(CXXFLAGS)
