/*
Este programa selecciona las califs. mas altas para que se muestren que el alumno acredito el curso con tal calificacion
IRVIN ELI MORENO CORONA  2PRBM
23/MAYO/2020
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	system("color 0A");
	int i,j;
	float Alumnos[20][3],mayor[20];
	printf("\t\tUNIVERSIDAD VIRTUAL DE MEXICO\n\n");
	printf("Coloque las calificaciones de los alumnos:\n\n");

	for (i=0; i<2; i++)
	{
		printf("\n\n\tALUMNO %i\n",i+1);
		for (j=0; j<3; j++)
		{
			printf("Calificacion #%i: ",j+1);
			scanf("%f",&Alumnos[i][j]);

			if (mayor[i]<Alumnos[i][j])
            {
                mayor[i]=Alumnos[i][j];
            }
		}
	}
	
	printf("\t\nMEJORES CALIFICACIONES:\n\n");
	for (i=0; i<2; i++)
	{
		printf("El alumno %i acredito el curso con la calificacion de %.2f\n",(i+1),mayor[i]);
	}
	getch();
}


