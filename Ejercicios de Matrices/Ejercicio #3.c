#include <stdio.h>
#include <conio.h>

void main()
{
	system("color 0A");
	int i,j;
	float M1[4][4],M2[4][4],M3[4][4];
	printf("\t\tESTADISTICA\n\n");
	printf("Ingrese los elementos de las dos matrices\n\n");

	printf("\t\tMATRIZ 1\n\n");
	for (i=0; i<4; i++)
	{
		printf("\tFila %i\n",i+1);
		for (j=0; j<4; j++)
		{
			printf("Dato %i: ",j+1);
			scanf("%f",&M1[i][j]);
		}
	}

	printf("\t\tMATRIZ 2\n\n");
	for (i=0; i<4; i++)
	{
		printf("\tFila %i\n",i+1);
		for (j=0; j<4; j++)
		{
			printf("Dato %i: ",j+1);
			scanf("%f",&M2[i][j]);
		}
	}

	printf("\n\n");
	printf("Matriz 1:\n\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf(" %.2f ",M1[i][j]);
		}
		printf("\n");
	}
	printf("\n\tDiagonal 1\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			if (i==j)
			{
				printf(" %.2f ",M1[i][j]);
			}
		}
	}

	printf("\n\n");
	printf("Matriz 2:\n\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf(" %.2f ",M2[i][j]);
		}
		printf("\n");
	}
	printf("\n\tDiagonal 2\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			if (i==j)
			{
				printf(" %.2f ",M2[i][j]);
			}
		}
	}
	printf("\n\n");
	printf("\nMATRIZ #3 (Suma de Matriz 1 y Matriz 2)\n\n");

	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			M3[i][j]=M1[i][j]+M2[i][j];
		}
	}
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			printf(" %.2f ",M3[i][j]);
		}
		printf("\n");
	}
	printf("\n\tDiagonal 3\n");
	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
			if (i==j)
			{
				printf(" %.2f ",M3[i][j]);
			}
		}
	}
	getch();
}

