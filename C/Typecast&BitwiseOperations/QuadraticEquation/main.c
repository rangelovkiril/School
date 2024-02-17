#include <stdio.h>
#include "quadraticroots.h"

int main (int argc, char ** argv){

    QuadraticRootsResult test1 = findroots(1, 2, 1);

    printf("%Lf, %Lf, norealroots: %d\n", test1.x1, test1.x2, test1.norealroots);

    return 0;
}