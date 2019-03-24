#include<stdio.h>

void factorialdowhile(int a);

int main(){
	
	int x;
	
	printf("introduzca un numero: \n");
	scanf("%i", &x);
	
	factorialdowhile(x);
	
	return 0;
	
}

void factorialdowhile(int a){
	
	int fact=1;
	
	do{
		
		fact=fact*a;
		a=a-1;
		
	}
	while(a!=0);
	
	printf("%d",fact);
	
	return;
}
