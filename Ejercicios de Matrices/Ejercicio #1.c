#include <stdio.h>
#include <conio.h>

void main()
{
	system("color 0A");
	printf("\t\tREGISTRO DE CALIFICACIONES\n\n");
	int i,j;
	float Est[10][5],suma,PG,PI[10],SI[10];
	
	for (i=0; i<10; i++)
	{
		SI[i]=0;
		printf("\nALUMNO NUMERO %i\n\n",i+1);
		for (j=0; j<5; j++)
		{
			printf("Calificacion %i: ",j+1);
			scanf("%f",&Est[i][j]);
			suma=suma+Est[i][j];
			SI[i]=SI[i]+Est[i][j];
		    PI[i]=SI[i]/5;
		}
	}
	
	PG=suma/50;

	printf("\n\n");
	printf("Calificaciones:\n\n");
	for (i=0; i<10; i++)
	{
		printf("Alumno %i: ",i+1);
		for (j=0; j<5; j++)
		{
			printf(" %.2f ",Est[i][j]);
		}
		printf("\n");
	}

	printf("\t\t\n\nPromedio de cada alumno: \n\n");
	for (i=0; i<10; i++)
	{
		printf("\nAlumno %i: %.2f",(i+1),PI[i]);
	}

	printf("\n\n\n\t\tPromedio general del grupo: %.2f",PG);
	getch();
}

