#include <stdio.h>

	//Funciones
	float pesosADolares(float pesos){
	return pesos / 20.95; //ingresar $50 pesos y retorne = 2.38
	}
	
	float dolaresAPesos(float dolares){
		return dolares * 20.95; //ingresar $50 pesos y retorne = 1047.5
	}
	
	float librasApesos( float pesos){
		return pesos*27.55;
	}
		
	float pesosAlibras( float libras){
		return libras/27.55;
		}
        float pesosARublos(float pesos){
		return pesos / 0.21;
		}
	float rublosAPesos(float rublos){
		return rublos * 0.21;
			}

	float YenaPeso (float yen){
	
		return (yen * 0.17);
			}

	float PesoaYen (float peso){
	
		return (peso*6.00);
			}

	float pesosAYuan (float pesos){
		return pesos / 0.32;
			}	
	float yuanAPesos (float yuan){
		return yuan * 0.32;
			}
		//Kevin - Euros
		//Jose Luis = Libra
		//Irving = Yen
		//Carlos Martinez = Yuan
		//Rayma = Won
		//Kai = 
		//Julio =
		//CJ =
                //Gabriel = Rublos

int main(int argc, char *argv[]) {
	
	int opcionMenu, opcionTipoDeCambio;
	float cantidad;
		
	 printf("***Conversor de monedas internacionales a pesos mexicanos***\n");
	 printf("\t \t \t---Menú--- \n");
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
	 printf("Selecciona la opción del tipo de cambio que quieras realizar: ");
	 
	 scanf("%i", &opcionMenu);
	 
	 switch(opcionMenu)
	 {
		case 1:
			printf("\n¿Qué tipo de cambio quieres hacer? de dólar a pesos escribe 1 y de pesos a dólares 2: ");
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
		case 2:
		printf("Hola Mundo");
		break;
		case 3:
			
			printf("Para convertir de Libras a Pesos preciona 1\n");
			printf("Para convertir de Pesos a Libras 2\n");
			scanf("%i", &opcionTipoDeCambio);
			
			if(opcionTipoDeCambio == 1){
				printf("Ingresa la cantidad que quieres cambiar\n");
				scanf("%f",&cantidad);
				printf("%f Libras = %f Pesos\n",cantidad,librasApesos(cantidad));
			}
			else if(opcionTipoDeCambio == 1){
				printf("Ingresa la cantidad de quieres cambiar\n");
				scanf("%f",&cantidad);
				printf("%f Pesos = %f Libras",cantidad,pesosAlibras(cantidad));
			}
			else{
				printf("ERROR");
			}
			
			
		printf("Hola Mundo");
		break;
			 
		case 4:
			printf("Para convertir de Yen a Pesos presiona 1 \n");
			printf("Para convertir de Pesos a Yen presiona 2 \n");
			scanf("%i", &opcionTipoDeCambio);
			
			if(opcionTipoDeCambio == 1){
				printf("Ingresa la cantidad que quieres cambiar\n");
				scanf("%f",&cantidad);
				printf("%f Yenes son %f pesos. \n\n", cantidad, YenaPeso(cantidad));
			}
			else if(opcionTipoDeCambio == 2){
				printf("Ingresa la cantidad de quieres cambiar\n");
				scanf("%f",&cantidad);
				printf("%f pesos son %f yenes. \n\n", cantidad, PesoaYen(cantidad));
			}
			else{
				printf("ERROR");
			} 
		break;
			 
		case 5:
		printf("\n¿Qué tipo de cambio quieres hacer? de yuan a pesos escribe 1 y de pesos a yuan 2: ");
				scanf("%i", &opcionTipoDeCambio);
				
				if(opcionTipoDeCambio == 1){
					printf("\nEscribe la cantidad que quieres cambiar: ");
					scanf("%f", &cantidad);
					printf("%f Yuan son %f pesos. \n", cantidad, pesosAYuan(cantidad));
				}
				
				if(opcionTipoDeCambio == 2){
					printf("\nEscribe la cantidad que quieres cambiar: ");
					scanf("%f", &cantidad);
					printf("%f pesos son %f Yuan. \n", cantidad, yuanAPesos(cantidad));
				}
				break;
		case 6:
		printf("Hola Mundo");
		break;
		case 7:
		printf("Hola Mundo");
		break;
		case 8:
		printf("Hola Mundo");
		break;
		case 9:
		                printf("\n¿Qué tipo de cambio quieres hacer? de rublos a pesos escribe 1 y de pesos a a rublos 2: ");
				scanf("%i", &opcionTipoDeCambio);
				
				if(opcionTipoDeCambio == 1){
					printf("\nEscribe la cantidad que quieres cambiar: ");
					scanf("%f", &cantidad);
					printf("%f rublos son %f pesos. \n", cantidad, rublosAPesos(cantidad));
				}
				
				if(opcionTipoDeCambio == 2){
					printf("\nEscribe la cantidad que quieres cambiar: ");
					scanf("%f", &cantidad);
					printf("%f pesos son %f rublos. \n", cantidad, pesosARublos(cantidad));
				}
				break;
		break;
		case 0:
		 printf("\nGracias por usar este conversor :D");
		 break;
	 }	 
	 
	return 0;
}
