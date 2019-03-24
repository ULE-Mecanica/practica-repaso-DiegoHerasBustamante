#include<stdio.h>

int	multiplica(int a,int b);

int main(){
	
	int x, y, resultado;
	
	printf("Escriba un numero:");
	scanf("%i", &x);
	
	printf("Escriba otro numero:");
	scanf("%i", &y);
	
	resultado=multiplica(x,y);
	
	printf("El producto de %i por %i por sumas sucesivas es: %d", x, y, resultado);
	
	return 0;

}

int	multiplica(int a,int b){
	
	int i,mult;
	mult=0;
	
	for(i=1;i<=a;i++){
		
		
		mult=mult+b;
		
	}
	
	return(mult);	
}
