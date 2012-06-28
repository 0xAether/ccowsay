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
//Variables
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
    printf("beavis.zen\tBeavis, with Zen philosophy removed.\n\
bong\tA cow with a bong, from lars@csua.berkeley.edu\n\
bud-frogs\tThe Budweiser frogs\n\
bunny\tA cute little wabbit\n\
cheese\tThe cheese from milk & cheese\n\
cower\tA cowering cow\n\
daemon\t4.4 >> 5.4\n\
dragon-and-cow\tA dragon smiting a cow, possible credit to kube@csua.berkeley.edu\n\
dragon\tThe Whitespace Dragon\n\
elephant\tAn elephant out and about\n\
elephant-in-snake\tDo we need to explain this?\n\
eyes\tEvil-looking eyes\n\
flaming-sheep\tThe flaming sheep, contributed by Geordan Rosario (geordan@csua.berkeley.edu)\n\
ghostbusters\tGhostbusters!\n\
head-in\tGo stick yer head in a cow.\n\
hellokitty\tHello Kitty\n\
kiss\tA lovers' empbrace\n\
kitty\tA kitten of sorts, I think\n\
koala\tFrom the canonical koala collection\n\
kosh\tIt's a Kosh Cow!\n\
luke-koala\tFrom the canonical koala collection\n\
meow\tA meowing tiger?\n\
milk\tMilk from Milk and Cheese\n\
moofasa\tMOOfasa.\n\
mutilated\tA mutilated cow, from aspolito@csua.berkeley.edu\n\
ren\tRen\n\
sheep\tThe non-flaming sheep.\n\
skeleton\tThis 'Scowleton' brought to you by one of {appel,kube,rowe}@csua.berkeley.edu\n\
stegosaurus\tA stegosaur with a top hat?\n\
stimpy\tStimpy!\n\
three-eyes\tA cow with three eyes, brought to you by dpetrou@csua.berkeley.edu\n\
turkey\tTurkey!\n\
turtle\tA mysterious turtle...\n\
tux\tTuX (c) pborys@p-soft.silesia.linux.org.pl\n\
vader\tCowth Vader, from geordan@csua.berkeley.edu\n\
vader-koala\tAnother canonical koala?\n\
www\tA cow wadvertising the World Wide Web, from lim@csua.berkeley.edu\n");
}

void displayhelp(void) {
    printf("This program displays all of its arguments in a speech bubble.\n\
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
printf("        \\   ^__^\n\
         \\  (oo)\\_______\n\
            (__)\\       )\\/\\\n\
                ||----w |\n\
                ||     ||\n");
}