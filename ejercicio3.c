#include <stdio.h>

int main() {
	
	int matriz[5][5];
	int i,j;
	
	for(i=0;i<5;i++){
		printf("ingrese la diagonal ");
		scanf("%d",&matriz[i][i]);
		
	}
	
	printf("ingrese el triangulo superior ");
	
	for(i=0;i<5;i++){
		
		for(j=i+1;j<5;j++){
		
			scanf("%d",&matriz[i][j]);
			
		}
	}
	
	printf("ingrese el triangulo inferior ");
	
	for(i=1;i<5;i++){
		
		for(j=0;j<i;j++){
			
			scanf("%d",&matriz[i][j]);
				
		}
	}
	
	
	for(i=0;i<5;i++){
		
		for(j=0;j<5;j++){
			printf("%d \t ",matriz[i][j]);
			
		}
		printf(" \n ");
	}
	
	return 0;
}

