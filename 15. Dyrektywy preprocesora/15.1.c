#include <windows.h>
#include <stdio.h>
#define PI 3.14159

int main(void){
    double r;
    SetConsoleCP(1250);
    SetConsoleOutputCP(1250);
    while(1){
        printf("Podaj promie� ko�a: ");
        scanf("%lf", &r);
        if(r>0) break;
        puts("Niew�a�ciwa warto��!");
    }
    printf("Pole powierzchni ko�a - %lf\n", PI*r*r);
    printf("Obw�d okr�gu - %lf\n", 2*PI*r);
    return EXIT_SUCCESS;
}
