/*
 *
 * The original cowsay program in C
 * By: Aaron
 * Started: June 22, 2012
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printcow(void);

int main(int argc, char *argv[]) {
	if( argc == 1 ) {
		exit(1);
	}
	unsigned short counter;
	unsigned short argscharcount=0;
	
	for(counter=1; counter < argc; counter++) {
		if (counter == ( argc - 1)) {
			argscharcount=(argscharcount + (strlen(argv[counter])));
		}
		else {
			argscharcount=(argscharcount + (strlen(argv[counter])) + 1);
		}
	}
	argscharcount=argscharcount + 2;
	
	printf(" ");
	for(counter=1; counter <= argscharcount; counter++) {
		printf("_");
	}
	printf("\n< ");
	for(counter=1; counter < argc; counter++) {
		if( counter == ( argc - 1 )) {
			printf("%s", argv[counter]);
		}
		else {
			printf("%s ", argv[counter]);
		}
	}
	printf(" >\n ");
	for(counter=1; counter <= argscharcount; counter++) {
		printf("-");
	}
	printf("\n");
	printcow();
	return 0;
	
}

void printcow(void) {
	printf("        \\   ^__^\n         \\  (oo)\\_______\n            (__)\\       )\\/\\\n                ||----w |\n                ||     ||\n");
}
