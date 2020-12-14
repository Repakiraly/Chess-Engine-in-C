#include <stdio.h>
#include <stdlib.h>
#include "defs.h"

#define PAWN "rnbqkb1r/pp1p1pPp/8/2p1pP2/1P1P4/3P3P/P1P1P3/RNBQKBNR w KQkq e6 0 1"
#define PBLACK "rnbqkbnr/p1p1p3/3p3p/1p1p4/2P1Pp2/8/PP1P1PpP/RNBQKB1R b - e3 0 1"


int main() {

    printf("My name is CJ Vercetti\nNice to meet you friend!\n");
    AllInit();

    S_BOARD board[1];

    ParseFen(PBLACK,board);
    PrintBoard(board);

    S_MOVELIST list[1];

    GenerateAllMoves(board,list);

    PrintMoveList(list);

	return 0;
}
