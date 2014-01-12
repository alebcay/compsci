#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

using namespace std;

void clearscreen () {
    system( "cls" );
}

main() {
    for (int a = 1; a == 1; a) {
        printf("Hello world!");
        Sleep(500);
        printf("\r");
        printf("Bye bye world!");
        Sleep(500);
        clearscreen();
    }
}
