#include<stdio.h>
#include<stdlib.h>
int main (void){
	int a, b;
	printf("Ingrese el primer valor\n ");
	scanf("%d",&a);
	printf("Ingresa el segundo valor\n");
	scanf("%d",&b);
	if (a>b){
		printf("%d es mayor a %d",a ,b);
		
	}
	else if (a<b){
		printf("%d es menor a %d", a , b);
		
	}
	else{
		printf("%d es igual a %d",a ,b);
	}
}
