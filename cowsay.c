/*
 *
 * The original cowsay program in C
 * By: Aaron
 * Started: June 22, 2012
 *
 */
/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////////////////
//Functions
//////
void printcow(void);
void displayhelp(void);
void displaycowlist(void);

////////////////
//Varables
//////
unsigned int counter;
unsigned int argscharcount=0;

int main(int argc, char *argv[]) {

	/*Handle Arguments*/
	if( argc == 1 ) {
		displayhelp();
		exit(1);
	}
	for (counter=1; counter < argc; counter++) {
		if ( !strcmp(argv[counter], "-h") || !strcmp(argv[counter], "--help") ) {
			displayhelp();
			exit(0);
		}
		else if ( !strcmp(argv[counter], "-l") || !strcmp(argv[counter], "--list") ) {
			displaycowlist();
			exit(0);
		}
	}
	
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

void displaycowlist(void) {
	printf("beavis.zen\tBeavis, with Zen philosophy removed.\n");
}

void displayhelp(void) {
	printf("\nThis program displays all of its arguments in a speech bubble.\n\
With your choice of animal/person/thing underneath it. Or in\n\
other words this program is a re-make of the famous Perl\n\
program ``cowsay\"\n\
\n\
Usage:\n\
    ccowsay <flag(s)> Sentence to say\n\
\n\
Flags:\n\
    -h or --help - Displays this help text.\n\
    -l or --list - List all cowfiles.\n\
    -c or --cow  - Specify cowfile.\n");
}

void printcow(void) {
	/*printf("   \\         __------~~-,\n\
    \\      ,'            ,\n\
          /               \\\n\
         /                :\n\
        |                  '\n\
        |                  |\n\
        |                  |\n\
         |   _--           |\n\
         _| =-.     .-.   |\n\
         o|/o/       _.   |\n\
         /  ~          \\ |\n\
       (____@)  ___~    |\n\
          |_===~~~.`    |\n\
       _______.--~     |\n\
       \\________       |\n\
                \\      |\n\
              __/-___-- -__\n\
             /            _ \\\n");*/
	printf("        \\   ^__^\n         \\  (oo)\\_______\n            (__)\\       )\\/\\\n                ||----w |\n                ||     ||\n");
}