#include<stdio.h>

void factorialwhile(int a);

int main(){
	
	int x,fact,i;
	fact=1;
	
	printf("introduzca un numero: \n");
	scanf("%i", &x);
	
	factorialwhile(x);
	
	return 0;
	
}

void factorialwhile(int a){
	
	int fact=1;
	
	while(a!=0){
		
		fact=fact*a;
		a=a-1;
		
	}
	
	printf("%d",fact);
	
	return;
}
