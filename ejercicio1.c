#include <stdio.h>

int main() {
	int matriz[6][5] = {0};
	int i = 1,j;
	
	while(i != 0){
	
	printf("ingresa filas ");
	scanf("%d",&i);
	
	if(i == 0){
		break;
		
	}
	
	printf("ingrese columna");
	scanf("%d",&j);
	
	printf("ingrese el valor a guardar ");
	scanf("%d",&matriz[i-1][j-1]);
	
	}
	
	for(i=0;i<6;i++){
		
		for(j=0;j<5;j++){
			printf("%d \t ",matriz[i][j]);
			
		}
	
		printf("\n ");
	}
	
	
	
	return 0;
}

