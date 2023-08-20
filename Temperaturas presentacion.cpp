#include  <stdio.h>

void Farenheit (int valor);
void Celcius(int valor);

char opcion;
float Valor;
float Resultado;


int main(){
	
   
   printf("Tu valor es en Fareheit (F) o en Celcius (C): ");
   scanf("%c",&opcion);
   
   printf("Que valor quieres cambiar: ");
   scanf("%f", &Valor);
   
   if (opcion == 'f')
    	Resultado = (Valor-32) /1.8;
		//printf("%f",Resultado);
  	   else if (opcion = 'c')
		 Resultado = (Valor *1.8)+32;
 
     
   printf("\n Tu resultado es : %f", Resultado, "%f ", Valor);
   //printf("%c",opcion);
   	return 0;
}