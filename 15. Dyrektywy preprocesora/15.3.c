#include <windows.h>
#include <limits.h>
#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#define BIGGER(x,y) (x>y)?x:y

int main(void){
    unsigned char N;
    int bigest=INT_MIN;
    SetConsoleOutputCP(1250);
    while(1){
        printf("Wprowad� ilo�� liczb do por�wnania: ");
        scanf("%hhu", &N);
        if(N>0) break;
        puts("Niew�a�ciwa warto��!");
    }
    int array[N];
    for(unsigned char i=0; i<N; ++i){
        printf("Wprowad� warto�� liczby %hhu: ", i);
        scanf("%d", &array[i]);
    }
    for(unsigned char i=0; i<N; ++i) bigest=BIGGER(bigest, array[i]);
    printf("Najwi�ksza liczba - %d", bigest);
    return EXIT_SUCCESS;
}
