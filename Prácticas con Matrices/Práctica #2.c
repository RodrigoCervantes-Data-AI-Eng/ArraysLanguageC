/*
El programa calcula el promedio de los alumnos y determina la mencion que obtienen en base a su promedio
Cervantes Martinez Rodrigo Fabian  2PRBM
23/MAYO/2020
*/
#include <stdio.h>
#include  <conio.h>

void main()
{
	int i,j,Exce=0,Hono=0,Dest=0,NA=0,T;
	float semestre[30][6],SI[30],PI[30];
	system("color 0A");
	printf("\t\tGRADUACION DEL GRUPO DE PROGRAMACION\n\n");
	printf("Llene lo que se pide a continuacion:\n\n");

	for (i=0; i<30; i++)
	{
		SI[i]=0;
		printf("\n\tALUMNO %i\n",i+1);
		for (j=0; j<6; j++)
		{
			printf("Calificacion del semestre %i: ",j+1);
			scanf("%f",&semestre[i][j]);
			SI[i]=SI[i]+semestre[i][j];
			PI[i]=SI[i]/6;
		}
	}

	printf("\n\n");
	printf("Calificaciones:\n\n");
	for (i=0; i<30; i++)
	{
		printf("Alumno %i: ",i+1);
		for (j=0; j<6; j++)
		{
			printf(" %.2f ",semestre[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	for (i=0; i<30; i++)
	{
		if (PI[i]>=10)
		{
			printf("El alumno %i obtiene una MENCION EXCELENTE\n",i+1);
			Exce++;
		}
		else if (PI[i]>=9 && PI[i]<10)
		{
			printf("El alumno %i obtiene una MENCION HONORIFICA\n",i+1);
			Hono++;
		}
		else if (PI[i]>=8 && PI[i]<9)
		{
			printf("El alumno %i obtiene una MENCION DESTACADA\n",i+1);
			Dest++;
		}
		else
		{
			printf("El alumno %i no obtuvo NINGUN tipo de mencion\n",i+1);
			NA++;
		}
	}

	T=Exce+Hono+Dest;
	printf("\n\n\t\tMENCIONES TOTALES: %i\n\n",T);
	printf("\nAlumnos con MENCION EXCELENTE: %i\n",Exce);
	printf("Alumnos con MENCION HONORIFICA: %i\n",Hono);
	printf("Alumnos con MENCION DESTACADA: %i\n",Dest);
	printf("Alumnos sin MENCION: %i",NA);
	getch();
}


