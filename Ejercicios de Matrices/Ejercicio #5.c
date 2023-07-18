#include <stdio.h>
#include <conio.h>

void main()
{
	system("color 0A");
	int i,j,matriz[3][3],Filas[3],Columnas[3],suma2[3];
	printf("\t\tMATRIZ\n\n");
	printf("Llene la siguiente matriz de 3 x 3\n\n");
	
	for (i=0; i<3; i++)
	{
		Filas[i]=0;
		printf("\tFila %i\n",i+1);
		for (j=0; j<3; j++)
		{
			printf("Dato %i: ",j+1);
			scanf("%i",&matriz[i][j]);
			Filas[i]=Filas[i]+matriz[i][j];
		}
	}
	
	for(j=0;j<3;j++)
	{
        suma2[j]=0;
        for(i=0;i<3;i++)
		{
            suma2[j]=suma2[j]+matriz[i][j];
        } 
		Columnas[j]=suma2[j];
    }
	
	printf("\n\n");
	printf("\tMatriz:\n\n");
	for (i=0; i<3; i++)
	{
		printf("\t");
		for (j=0; j<3; j++)
		{
			printf("%i ",matriz[i][j]);
		}
		printf("\n");
	}

	printf("\nSuma de las FILAS:\n");
	for (i=0; i<3; i++)
	{
		printf("\n%i",Filas[i]);
	}
	printf("\n\n");
	
	printf("Suma de las COLUMNAS:\n");
	for (j=0; j<3; j++)
	{
		printf("\n%i",Columnas[j]);
	}
	getch();
}
