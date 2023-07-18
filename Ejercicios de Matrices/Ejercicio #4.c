#include<stdio.h>
#include<conio.h>

void main()
{
	system ("color 0A");
	int i,j,PRS=0,SGS=0,TRS=0;
	float S[10][5],suma[10],total[10];
	printf("\t\tSUELDOS DE EMPLEADOS\n\n");
	printf("Coloque lo que se pide: \n\n");
	
	for (i=0; i<3; i++)
	{
		suma[i]=0;
		printf("\nEMPLEADO #%i\n",i+1);
		for (j=0; j<5; j++)
		{
			printf("Cual fue el sueldo del mes %i?: ",j+1);
			scanf("%f",&S [i][j]);
			suma[i]=suma[i]+S[i][j];
			total[i]=suma[i];
		}
		
	}
	
	for (i=0; i<3; i++)
	{
		if (total[i]<=1000)
		{
			PRS++;
		}
		if (total[i]>=1001 && total[i]<=5000)
		{
			SGS++;
		}
		if (total[i]>=5001)
		{
			TRS++;
		}
	}
	
	printf("\n\n");
	printf("Sueldos: \n\n");
	for (i=0; i<3; i++)
	{
		printf("\nEMPLEADO %i: \n",i+1);
		for (j=0; j<5; j++)
		{
			printf(" %.2f ",S[i][j]);
		}
		printf("\n\n");
		printf("\tSueldo total de los 5 meses: %.0f\n",suma[i]);
	}

	printf("\n");
	printf("\nEmpleados con sueldos totales o menores a 1000: %i\n",PRS);
	printf("\nEmpleados con sueldos totales de 1001 a 5000: %i\n",SGS);
	printf("\nEmpleados con sueldos mayores a 5001: %i\n",TRS);
	
	getch;
}
