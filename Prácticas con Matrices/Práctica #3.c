/*
Este programa imita a unas reservaciones de asientos en una sala de cine
Cervantes Martinez Rodrigo Fabian 2PRBM
23 de Mayo del 2020
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	int i,j,elec,lugar[10][15],fila,columna,salir;
	char band='F';
	system ("color 0A");

	for(i=0; i<10; i++)
	{
		for (j=0; j<15; j++)
		{
			lugar[i][j]=0;
		}
	}
	do
	{
		system("cls");
		printf("\t\tSALA DE CINE\n\n");
		printf("\tMENU DE OPCIONES:\n\n");
		printf("1.-Reservar asientos\n2.-Mostrar asientos ocupados\n3.-Cancelar reservaciones\n4.-Salir\n");
		printf("Seleccione una opcion: ");
		
		scanf("%i",&elec);
		switch (elec)
		{
			case 1:
				do
				{
				    printf("Formacion de asientos\n\n");
	               
	                for(i=0; i<10; i++)
	                {
		                printf("Fila %i: ",i+1);
						for (j=0; j<15; j++)
		                {
			                printf(" %i ",j+1);
		                }
		                printf("\n");
	                }
					printf("\n\nEliga un lugar para sentarse: \n");
					printf("Fila: ");
				    scanf("%i",&fila);
				    printf("Columna: ");
				    scanf("%i",&columna);
				    if (lugar[fila-1][columna-1]==1)
				    {
					    printf("\n\t\tEl lugar deseado esta OCUPADO, intente con otro\n\n");
					    band='F';
					    printf("\n\n\t\t");
					    system("pause");
				    }
				    else if (lugar[fila-1][columna-1]==0)
				    {
					    band='V';
						printf("\n\n\t\tSu reservacion ha sido completada\n\n");
					    lugar[fila-1][columna-1]=1;
					    printf("\n\n\t\t");
					    system("pause");
				    }
			    }
			while(band=='F'); 
			break;
			
			case 2:
				printf("\n\n");
				for(i=0; i<10; i++)
				{
					printf("Fila %i: ",i+1);
					for (j=0; j<15; j++)
					{
						if(lugar[i][j]==1)
					    {
					        printf(" %i OCUPADO ",j+1);	
					    }
					    else if (lugar[i][j]==0)
				 	    {
						    printf(" %i LIBRE ",j+1);
					    }
					}
					printf("\n");
				}
				printf("\n\n\n\t");
				system("pause");
				break;
		
			case 3:
				do
				{
					printf("Formacion de asientos\n\n");
				
					printf("\n\n");
				    for(i=0; i<10; i++)
				    {
					    printf("Fila %i: ",i+1);
					    for (j=0; j<15; j++)
					    {
						    if(lugar[i][j]==1)
					        {
					            printf(" %i OCUPADO ",j+1);	
					        }
					        else if (lugar[i][j]==0)
				 	        {
							    printf(" %i LIBRE ",j+1);
					        }
					    }
					    printf("\n");
				    }
				    printf("\n\n\n\t");
					printf("\n\nIngrese la ubicacion de reservacion a cancelar:\n");
					printf("Fila: ");
				    scanf("%i",&fila);
				    printf("Columna: ");
				    scanf("%i",&columna);
					if(lugar[fila-1][columna-1]==1)
					{
						printf("\n\nHemos borrado su reservacion\n\n");
						lugar[fila-1][columna-1]=0;
						band='V';
						printf("\n\n\t\t");
						system("pause");
					}
					else if (lugar[fila-1][columna-1]==0)
					{
						band='F';
						printf("\n\nEn el lugar seleccionado NO HAY reservaciones\n\n");
						printf("\n\n\t\t");
						system("pause");
					}
					printf("\n\n\t\t(SI NO HAY MAS RESERVACIONES QUE CANCELAR INGRESE EL NUMERO 2 PARA SALIR)\n");
					scanf("%i",&salir);
					if (salir==2)
					{
						break;
					}
				}
				while(band=='F'); 
				break;
			case 4:
				printf("\n\n\t\tGRACIAS POR VISITAR LA SALA DE CINE\n\n\t");
				system("pause");
				break;

			default: 
			    printf("\n\n\t\tOPCION NO VALIDA\n\n\t");
			    system("pause");
	    }
	}
	while (elec!=4);
	getch();
}


