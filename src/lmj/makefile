
#which compiler
CC = g++

# where to install
INSTDIR = ../../build/

#where  are the include files
INCLUDE = ../../include/

# Options for compilation
CFLAGS = -g -Wall  -ansi  

# Options for making archives
ARFLAGS = crv

# command for making archive
AR = ar

lmj: lmj_as.o lmj_bs.o lmj_input.o lmj_control.o lmj_mem.o lmj_time.o main.o
	$(AR) $(ARFLAGS) lmj  *.o;  cp lmj $(INSTDIR)
	
lmj_as.o: lmj_as.cpp 
	$(CC) -I $(INCLUDE) -c $(CFLAGS) lmj_as.cpp
 
lmj_bs.o: lmj_bs.cpp 
	$(CC) -I $(INCLUDE) -c $(CFLAGS) lmj_bs.cpp

lmj_input.o: lmj_input.cpp 
	$(CC) -I $(INCLUDE) -c $(CFLAGS) lmj_input.cpp

lmj_control.o: lmj_control.cpp 
	$(CC) -I $(INCLUDE) -c $(CFLAGS) lmj_control.cpp

lmj_mem.o: lmj_mem.cpp
	$(CC) -I $(INCLUDE) -c $(CFLAGS) lmj_mem.cpp
	
lmj_time.o: lmj_time.cpp
	$(CC) -I $(INCLUDE) -c $(CFLAGS) lmj_time.cpp
main.o: main.cpp
	$(CC) -I $(INCLUDE) -c $(CFLAGS) main.cpp
	


clean:
	rm -rf *.o ; rm lmj ;
	cd ../../build ; rm *
