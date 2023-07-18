#include <stdio.h>
#include <conio.h>

void main()
{
	system("color 0A");
	int i,j;
	float VS[8][6],suma[8],T[8];
	printf("\t\tREGISTRO DE VENTAS\n\n");
	printf("Llene los datos que se piden a continuacion: \n");


	for (i=0; i<8; i++)
	{
		suma[i]=0;
		printf("\nVendedor: %i\n\n",i+1);
		for (j=0; j<6; j++)
		{
			printf("Registre las ventas del mes %i: ",j+1);
			scanf("%f",&VS[i][j]);
			suma[i]=suma[i]+VS[i][j];
			T[i]=suma[i];
		}
	}
	
	printf("\n\n");
	printf("Ventas:\n\n");
	for (i=0; i<8; i++)
	{
		printf("Vendedor %i: ",i+1);
		for (j=0; j<6; j++)
		{
			printf(" %.2f ",VS[i][j]);
		}
		printf("\n");
	}
	
	
	for (i=0; i<8; i++)
	{
		if (T[i]>=1000 && T[i]<=1500)
		{
			printf("\nEl vendedor %i obtiene un bono de $200",i+1);
		}
		if (T[i]>=1501 && T[i]<=2000)
		{
			printf("\nEl vendedor %i obtiene un bono de $300",i+1);
		}
		if (T[i]>2001 && T[i]<=2500)
		{
			printf("\nEl vendedor %i obtiene un bono de $400",i+1);
		}
		if (T[i]>=2501)
		{
			printf("\nEl vendedor %i obtiene un bono de $600",i+1);
		}
	}
	getch();
}
