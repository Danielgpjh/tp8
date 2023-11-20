#include <stdio.h>

int main() {

	int matriz[3][3];
	int i,j;
	int k,l,acum;
	
	printf("ingrese los valores \n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matriz[i][j]);
		}
		
	}
	
	printf("antes:\n");
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t ",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				for(l=0;l<3;l++){
					if(matriz[i][j] > matriz[k][l]){
						acum = matriz[i][j];
						matriz[i][j] = matriz[k][l];
						matriz[k][l] = acum;
						
					}
					
				}
				
			}
			
		}
		
	}
	
	printf("despues:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d \t ",matriz[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}

