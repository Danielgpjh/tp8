#include <stdio.h>

int main()
{
	int matriz[2][10]={0},num,edad,i,j,temp,temp2,cont=0;
	
	printf("Ingrese Nro de socio: ");
	scanf("%d",&num);
	
	while(num!=0 || cont==10){
		printf("Ingrese edad del socio: ");
		scanf("%d",&edad);
		matriz[cont][0]=num;
		matriz[cont][1]=edad;
		cont++;
		printf("Ingrese Nro de socio: ");
		scanf("%d",&num);
	}
	for(i=0;i<cont-1;i++) {
		for(j=i+1;j<cont;j++) {
			if (matriz[i][1]<matriz[j][1]) {
				temp=matriz[i][0];
				temp2=matriz[i][1];
				matriz[i][0]=matriz[j][0];
				matriz[i][1]=matriz[j][1];
				matriz[j][0]=temp;
				matriz[j][1]=temp2;
			}
		}
	}
	printf("Lista Ordenada por edades:\n");
	for (i=0;i<cont;i++) {
		printf("Nro de socio: %d, Edad: %d\n", matriz[i][0],matriz[i][1]);
	}
	return 0;
}
