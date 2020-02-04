/*
  https://open.kattis.com/problems/bijele
*/
#include <stdio.h>

void printDiff(int a, int b) {
    printf("%d ", a-b);
}

int main() {
    int king, queen, rook, bishop, knight, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    printDiff(1, king);
    printDiff(1, queen);
    printDiff(2, rook);
    printDiff(2, bishop);
    printDiff(2, knight);
    printDiff(8, pawn);

    return 0;
}

