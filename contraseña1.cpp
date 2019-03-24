#include<stdlib.h> 
#include<stdio.h> 

void clavemayor(int clav);
void clavemenor(int cla);
void clavecorrecta(int cl);

int main(){ 

int intentos=3; 
int clave; 

do{ 

printf("Introduce la contrasena: "); 
scanf("%d", &clave);
 
clavemayor(clave);
clavemenor(clave);
clavecorrecta(clave);
intentos--; 

printf("\n Te quedan %d oportunidades", intentos);

}while (intentos>0 && clave !=4567);

exit(-1);

return 0;

}

void clavemayor(int clav){
	
	if(clav>4567){
		
		printf("Pruebe con un numero menor.");
		
	}
	
	return;
	
}
void clavemenor(int cla){
	
	if(cla<4567){
		
		printf("Pruebe con un numero mayor.");
		
	}
	
	return;
	
}
void clavecorrecta(int cl){
	
	if(cl==4567){
		
		printf("Contasena correcta, Bienvenido.");
	}
	
	return;
	
}
