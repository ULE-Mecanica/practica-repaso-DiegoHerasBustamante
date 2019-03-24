#include<stdio.h>

void factorialfor(int a);

int main(){
	
	int x;
	
	printf("introduzca un numero: \n");
	scanf("%i", &x);
	
	factorialfor(x);
	
	return 0;
	
}

void factorialfor(int a){
	
	int i;
	int fact=1;
	
	for(i=1;i<=a;i++){
		
		fact=fact*i;
		
	}
	
	printf("%d",fact);
	
	return;
}
