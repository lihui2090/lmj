all:
	cd ./src/lmj/  ;$(MAKE);
clean: 
	@ cd ./src/lmj/ ; make clean; cd ./build ;rm -rf *; 