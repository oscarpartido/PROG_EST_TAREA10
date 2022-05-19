 /* autor:Oscar Vivaldi Partido Ramirez  fecha: 10/02/2022
capitulo 4 ejercicio 19 programa quue imprime el modelo de menor
precio por pie cuadrado 
*/
#include <stdio.h>

int main(){
	
	//declarar variables 
	 
	int persona, A1, A2, A3, A4, A5, B;
	float peso=0, muneca=0, cintura=0,Porcentaje, cadera=0,grasa=0, antebrazo=0 ;
	
	printf("de quien deseas calcular la grasa corporal?\n");
	printf("ingresa(1-si es mujer) \ningresa (2-si es hombre)\n");
	scanf("%d", &persona);
	//proceso
	
	if (persona==1){
	printf("ingresa el peso: \n");
	scanf("%f",&peso);
	printf("ingresa la medida de la muñeca:");
	scanf("%f", &muneca);
	printf("Ingresa la medida de la cintura (a la altura del ombligo ) :");
	scanf("%f",&cintura);
	printf("Ingresa la medida de la cadera :");
	scanf("%f",&cadera);
	printf("Ingresa la medida del antebrazo :");
	scanf("%f",&antebrazo);
	
	A1=(peso*0.732)+8.987;
	A2=muneca/3.140;
	A3=cintura*0.157;
	A4=cadera*0.249;
	A5=antebrazo*0.434;
	B=A1+A2-A3-A4+A5;
	grasa=peso-B;
	Porcentaje=(grasa*100)/peso;	
	printf("la grasa corporal de este usuario es:%f\n", grasa);
	printf("el porcentaje de grasa corporal es:\t%f",Porcentaje);
	}
	else if (persona==2){
	printf("Ingresa el peso del hombre: \n");
	scanf("%f",&peso);
	printf("Ingresa la medida de la muñeca del hombre:");
	scanf("%f", &muneca);
	A1=(peso*1.082)+94.42;
	A2=muneca*4.15;
	B=A1-A2;
	grasa=peso-B;
	Porcentaje=(grasa*100)/peso;
	printf("el porcentaje de grasa del usuario es: %f", Porcentaje);
	}
	else{
	printf("ERROR AL INGRESAR EL NUMERO ");
	}
		
	
	return 0;
}

