#include <stdio.h>

int main() {
	
	int clientes[3][3]={0};
	int i,j,numCliente,codigo;
	int monto,totalDepo=0,totalExtra=0;
	int totalComi=0,totalIntereses=0;
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("cliente #%d ingrese su numero: ",j+1);
			scanf ("%d",&numCliente);
			if (numCliente==0)
			{
				break;
			}
			printf ("codigo de transaccion (1-4)\n");
			printf ("1. Deposito\n"
					"2. Extraccion\n"
					"3. Comisiones deducidas\n"
					"4. Intereses acreditados\n");
			scanf ("%d",&codigo);
			
			if (codigo==1)
			{
				totalDepo++;
			}
		
			else 
				{
				if (codigo==2)
				{
					totalExtra++;
				}
				else 
				{
					if (codigo==3)
					{
						totalComi++;
					}
					else 
					{
						if (codigo==4)
						{
							totalIntereses++;
						}
						
					}
				}
				}
			
			while (codigo<1 || codigo>4)
			{
				printf ("codigo invalido, ingrese otro: ");
				scanf ("%d",&codigo);
			}
			printf ("ingrese monto de operacion: ");
			scanf ("%d",&monto);
			
			clientes[i][j]=numCliente;
		}
	}
	
	printf ("NoDe Clientes:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",clientes[i][j]);
		}
	}
	printf ("\nTotal Depositos:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalDepo);
		}
	}
	printf ("\nTotal Extracciones:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalExtra);
		}
	}
	printf ("\nTotal Comisiones:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalComi);
		}
	}
	printf ("\nTotal Intereses:\n");
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf ("%d ",totalIntereses);
		}
	}
	
	
	return 0;
}