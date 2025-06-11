#include <stdio.h>


float sum_val(float v1, float v2){
//float sum;
return (v1+v2);
}

int main(void){
float num1;
float num2;
char str[20];


printf("Inserisci il tuo nome: ");
if(scanf("%19s", str) != 1){   
printf("Input non valido. \n");
return 1;
}

printf("Inserisci il primo numero: ");
if(scanf("%f", &num1) != 1){
printf("Input non valido. \n");
return 1;
}

printf("Inserisci il secondo numero: ");
if(scanf("%f", &num2) != 1){ 
printf("Input non valido. \n");
return 1;
}

printf("Il nome dell'utente: %s\n", str);
printf("La somma è: %f", sum_val(num1,num2));

}
