#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	int sorte[3][6]={0},i,j,k,l,cont,numero,temporal,acu[2][43]={0};
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			cont=0;
			sorte[i][j]=rand()%43;
			for(k=0;k<j+1;k++){
				if(sorte[i][j]==sorte[i][k]){
					cont++;
				}
			if(cont==2){
				sorte[i][j]=rand()%43;
						cont=0;
					k=-1;
				}
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			acu[0][sorte[i][j]]++;
		}
	}
	for(i=0;i<43;i++){
		acu[1][i]=i;
	}
	
	printf("Ingrese un numero");
	scanf("%d",&numero);
	printf("El numero %d se repite en %d veces en el sorteo\n",numero,acu[0][numero]);
	
	for(i=0;i<43;i++){
		for(j=0;j<43;j++){
			if(acu[0][j]<acu[0][i]){
				temporal=acu[0][j];
				acu[0][j]=acu[0][i];
				acu[0][i]=temporal;
				temporal=acu[1][j];
				acu[1][j]=acu[1][i];
				acu[1][i]=temporal;
			}
		}
	}
	printf("los numeros que se repiten son: \n");
	for(i=0;i<43;i++){
		if(acu[0][i]==acu[0][0]){
			printf("- %d\n",acu[1][i]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			for(l=0;l<6;l++){
				temporal=sorte[i][l];
				sorte[i][l]=sorte[i][j];
				sorte[i][j]=temporal;
			}
		}
	}
	printf("matriz Ordenada: \n");
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			printf("%d  ",sorte[i][j]);
		}
		printf("\n");
	}
	return 0;
	
	
	
}
