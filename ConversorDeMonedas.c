#include <stdio.h>

	//Funciones
	float pesosADolares(float pesos){
	return pesos / 20.95; //ingresar $50 pesos y retorne = 2.38
	}
	
	float dolaresAPesos(float dolares){
		return dolares * 20.95; //ingresar $50 pesos y retorne = 1047.5
	}
		
		//Kevin - Euros
		//Jose Luis = Libra
		//Irving = Yen
		//Carlos Martinez = Yuan
		//Rayma = Won
		//Kai = 
		//Julio =
		//CJ =

int main(int argc, char *argv[]) {
	
	int opcionMenu, opcionTipoDeCambio;
	float cantidad;
		
	 printf("***Conversor de monedas internacionales a pesos mexicanos***\n");
	 printf("\t \t \t---Men�--- \n");
	 printf("1 - Dolar y Pesos Mexicanos \n");
	 printf("2 - Euro y Pesos Mexicanos \n");
	 printf("3 - Libra y Pesos Mexicanos \n");
	 printf("4 - Yen y Pesos Mexicanos \n");
	 printf("5 - Yuan y Pesos Mexicanos \n");
	 printf("6 - Won y Pesos Mexicanos \n");
	 printf("7 - - y Pesos Mexicanos \n");
	 printf("8 - - y Pesos Mexicanos \n");
	 printf("9 - - y Pesos Mexicanos \n");
	 printf("0 - Salir \n");
	 printf("\n");
	 printf("Selecciona la opci�n del tipo de cambio que quieras realizar: ");
	 
	 scanf("%i", &opcionMenu);
	 
	 switch(opcionMenu)
	 {
		case 1:
			printf("\n�Qu� tipo de cambio quieres hacer? de d�lar a pesos escribe 1 y de pesos a d�lares 2: ");
			scanf("%i", &opcionTipoDeCambio);
			
			if(opcionTipoDeCambio == 1){
				printf("\nEscribe la cantidad que quieres cambiar: ");
				scanf("%f", &cantidad);
				printf("%f dolares son %f pesos. \n", cantidad, dolaresAPesos(cantidad));
			}
			
			if(opcionTipoDeCambio == 2){
				printf("\nEscribe la cantidad que quieres cambiar: ");
				scanf("%f", &cantidad);
				printf("%f pesos son %f dolares. \n", cantidad, pesosADolares(cantidad));
			}
		break;
		
		case 0:
		 printf("\nGracias por usar este conversor :D");
		 break;
	 }	 
	 
	return 0;
}
