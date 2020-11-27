#include <stdio.h>
#include <stdlib.h>
#include "defs.h"



int main() {

    printf("My name is CJ Vercetti\nNice to meet you friend!\n");
    AllInit();

	int move = 0;
	int from = A2;
	int to = H1;
	int cap = wR;
	int prom = bN;

	move = (( from ) | ( to << 7 ) | ( cap << 14) | ( prom << 20));

	printf("from: %d to: %d cap:%d prom:%d\n",
            FROMSQ(move),TOSQ(move),CAPTURED(move),
            PROMOTED(move));
    printf("Algebraic from: %s\n", PrSq(from));
    printf("Algebraic to: %s\n", PrSq(to));
    printf("Algebraic move: %s\n", PrMove(move));


	return 0;
}
