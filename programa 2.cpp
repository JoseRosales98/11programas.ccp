#include<stdio.h>
int main (){
	int a,b;
	printf(" Ingrese el numerador:\n ");
	scanf("%d",&a);
	printf("ingrese el denominador:\n ");
	scanf("%d",&b);
	if (a % b ==0)
	printf(" %d es divisile por %d \n", a, b);
	else 
	printf("%d No es divisible por %d" , a, b);
	
}
