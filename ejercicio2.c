/*Ingresar una matriz de 3 (tres) filas por 3 (tres) columnas con valores
	enteros, primeramente, todas las columnas pares y posteriormente las
	impares y mostrar por pantalla el contenido de la matriz.*/


#include <stdio.h>

int main() {
	
	int matriz[3][3];
	int i,j;

	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			if(j==1)
			{
				printf("ingrese los valores para la columna par (columna 2):");
				scanf("%d",&matriz[i][j]);
				if(matriz[i][j]%2==1)
				{
					printf("Los numeros no son pares Ingrese nuevamente los numeros:");
					scanf("%d",&matriz[i][j]);
					
				}
				
			}
			
			
		}
		
	}
	
	for(i=0;i<3;i++)
	{
		
		for(j=0;j<3;j++)
		{
			if(j!=1)
			{
				printf("ingrese los valores para la columna impar (columna 1 y columna 3):");
				scanf("%d",&matriz[i][j]);
				
				if(matriz[i][j]%2==0)
				{
					printf("Los numeros no son impares Ingrese nuevamente los numeros:");
					scanf("%d",&matriz[i][j]);
					
				}
			}
		}
		printf("\n");
	}
	
	
	printf("contenido de la matriz :\n ");
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			printf("%d ",matriz [i][j]);
			
		}
		
		printf("\n ");
	}
	
	return 0;
}

