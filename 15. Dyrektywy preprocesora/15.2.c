#include <windows.h>
#include <stdio.h>
#define SQUARE(x) x*x
#define ABS(x) (x>0)?x:-x

int main(void){
    int x;
    SetConsoleCP(1250);
    SetConsoleOutputCP(1250);
    while(1){
        printf("Wprowad� warto�� x: ");
        scanf("%d", &x);
        if(x==0) break;
        printf("Kwadrat x - %d\n"
           "Warto�� bezwzgl�dna x - %d\n"
           , SQUARE(x), ABS(x));
    }
    return EXIT_SUCCESS;
}
