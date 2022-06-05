#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main(void) {
    int ch;
    while ((ch = getchar()) != EOF) {
        printf("%c", ch);
    }
        
    if (feof(stdin)) {
        puts("End of file reached");
    }    else if (ferror(stdin))   {
        perror("getchar()");
        fprintf(stderr, "getchar() failed in file %s at line # %d\n", __FILE__, __LINE__ - 9);
        exit(EXIT_FAILURE);
    }

    _getch();
    return EXIT_SUCCESS;
}