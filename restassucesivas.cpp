#include<stdio.h>

int	division(int a,int b);

int main(){
	
	int x, y, resultado;
	
	printf("Escriba el dividendo:");
	scanf("%i", &x);
	
	printf("Escriba el divisor:");
	scanf("%i", &y);
	
	if (x > 0 && y > 0 ){
	  	
	  	resultado=division(x,y);

        printf( "%d dividido entre %d por sumas sucesivas es igual a %d ", x, y, resultado );
    }
    else
        printf( "Ambos numeros deben ser mayores que cero.");
	
	return 0;

}

int	division(int a,int b){
	
	int coc = 0;
    int res = a;

    while ( res >= b ){
    	
        res -= b;
        coc++;
        
    }
		
	return(coc);
		
}
