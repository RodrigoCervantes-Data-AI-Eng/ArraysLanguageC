/*
Este programa hace lo que selecciones en el menu de opciones en la sala de teatro
IRVIN ELI MORENO CORONA 2PRBM
24/MAYO/2020
*/
#include <stdio.h>
#include <conio.h>

void main()
{
	system("color 0A");
	int i,j,lugar[20][30],choose,fila,columna,salir;
	char band='F';

	for (i=0; i<20; i++)
	{
		for (j=0; j<30; j++)
		{
			lugar[i][j]=0;
		}
	}
	do
	{
		system("cls");
		printf("\t\tSALA DE TEATRO\n\n");
		printf("\tMENU DE OPCIONES:\n\n");
		printf("1.-Realizar reservaciones\n2.-Cancelar reservaciones\n3.-Consultar reservaciones");
		printf("\n4.-Mostrar asientos ocupados/libres\n5.-Salir\nQue opcion elige?: ");
		scanf("%i",&choose);
		switch (choose)
		{
			
			case 1:
				do
				{
				    printf("Distribucion de los asientos\n\n");
	                
	                for(i=0; i<20; i++)
	                {
		                printf("Fila %i: ",i+1);
						for (j=0; j<30; j++)
		                {
			                printf(" %i ",j+1);
		                }
		                printf("\n");
	                }
					printf("\n\nEn donde quiere sentarse?:\n");
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
				do
				{
					printf("Distribucion de los asientos\n\n");
				
					printf("\n\n");
				    for(i=0; i<20; i++)
				    {
					    printf("Fila %i: ",i+1);
					    for (j=0; j<30; j++)
					    {
						    if(lugar[i][j]==1)
					        {
					            printf(" %i OCUPADO",j+1);	
					        }
					        else if (lugar[i][j]==0)
				 	        {
							    printf(" %i DESOCUPADO",j+1);
					        }
					    }
					    printf("\n");
				    }
				    printf("\n\n\n\t");
					printf("\n\nIngrese la ubiacion de reservacion a cancelar:\n");
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
			
			case 3:
				for (i=0; i<20; i++)
				{
					for (j=0; j<30; j++)
					{
						if(lugar[i][j]==1)
						{
							printf("%i,%i OCUPADO",(i+1),(j+1));
						}
					}
					printf("\n");
				}
				system ("pause");
				break;
			
		
			case 4:
				printf("\n\n");
				for(i=0; i<20; i++)
				{
					printf("Fila %i: ",i+1);
					for (j=0; j<30; j++)
					{
						if(lugar[i][j]==1)
					    {
					        printf(" %i OCUPADO",j+1);	
					    }
					    else if (lugar[i][j]==0)
				 	    {
						    printf(" %i DESOCUPADO",j+1);
					    }
					}
					printf("\n");
				}
				printf("\n\n\n\t");
				system("pause");
				break;
			
			case 5:
				printf("\n\n\t\tGRACIAS POR VISITAR EL TEATRO\n\n\t");
				system("pause");
				break;
	
			default:
				printf("\n\n\t\tOPCION NO VALIDA\n\n");
				system("pause");
				break;
		}	
	}
	while (choose!=5);
	getch();
}
