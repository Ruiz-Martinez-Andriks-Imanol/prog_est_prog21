/* Autor: Andriks Imanol Ruiz Mártinez, Realizado: 03/03/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa 
Materia: Programación Estructrada 
Ciclo: 01/2022

Este es un programa de  funciones y ciclo en Lenguaje C de la materia de Programación Estructurada
Muestra el uso de:
  
    -Variables flotantes y enteros
    printf para mostrar mensajes y variables
    -scanf
    -Funciones
    -for
    -Prototipos
    -El uso de include para las librerias
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
//prototipos
float calcularAhorro(float capital, int meses);
//Main
int main() {
	//Declaración de variable
	float dinero, ahorro;
	int periodo;
	//Proceso
	printf("Introduce la cantidad a ahorrar: $");
	scanf("%f",&dinero);
	printf("Indica a cuantos meses invertiras tu dinero: ");
	scanf("%d",&periodo);
	ahorro=calcularAhorro(dinero,periodo);
	//Salida
	printf("Al final del periodo obtendras. %.2f", ahorro);
	return 0;
}
//Función
float calcularAhorro(float capital, int meses){
	//Declaración
	float total=capital;
	for(int i=0;i<meses;i++){ //Ciclo
		total= total*0.04+total;
	}
	return total;
}
