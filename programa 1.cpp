#include<stdio.h>
#include<stdlib.h>
int main (){
int numero;
printf("Ingrese un numero ");
scanf("%d", & numero);
if (numero){
	if (numero < 100){
		printf ("el numero es menor que 100");
		
	}
	else if (numero == 100){
		printf("el numero es igual a 100");
	}
	else if (numero > 100){
		printf("el numero es mayor que 100");
	}
}	
	
}
