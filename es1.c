#include <stdio.h>

int sum(int a, int b){
    return a+b; // somma due interi
}

int main(void){
    int x=10, y=20;
    int s=sum(x,y);
    printf("La somma di %d e %d è %d\n",x,y,s); // % indica puntatore che sta puntanto al numero
    return 0;
}
