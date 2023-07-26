//El programa crea un estacionamiento donde puedes estacionar tu auto y lo registra, tambien puedes sacar tu auto y queda libre el espacio
//Cervantes Martinez Rodrigo Fabian 2PRBM
//13/MAYO/2020

#include<stdio.h>
#include<conio.h>

void main()
{
	system("color 0A");
	int esp[30],aux,i,j,a,opc,salir;
	char band = 'F';
	
	for(i=0; i<=29; i++)
	{
		esp[i]=0;
	}
	do{
		
		system("cls");
		printf("\t\tESTACIONAMIENTO\n\n");
		printf("1.- Entrada de autos\n2.- Salida de autos\n3.- Salir del programa\n\n");
		printf("Que opcion elige?: ");
		scanf("%i",&opc);
		switch(opc)
		{
		
			case 1:
				for(i=0; i<=29; i++)
				{
					if (esp[i]==0)
					{
						printf("%i LIBRE ",i+1);
					}
					else if(esp[i]==1)
					{
					    printf("%i OCUPADO ",i+1);	
					}
				}
			do{
				printf("\n\nEn donde desea estacionarse?: ");
				scanf("%i",&aux);
				if (esp[aux-1]==1)
				{
					printf("\n\t\tEl lugar deseado esta OCUPADO, intente con otro\n\n");
					band='F';
					printf("\n\n\t\t");
					system("pause");
				}
				else if(esp[aux-1]==0)
				{
					band='V';
					printf("\n\n\t\tSu coche ha sido registrado\n\n");
					esp[aux-1]=1;
					printf("\n\n\t\t");
					system("pause");
				}
			}
			while(band=='F'); 
			break;
		
			case 2:
				for(i=0; i<=29; i++)
				{
					if(esp[i]==0)
					{
						printf("%i LIBRE ",i+1);
					}
					else if(esp[i]==1)
					{
						printf("%i OCUPADO ",i+1);
					}
				}	
				do{
					printf("\n\nPonga el numero de cajon en el que se estaciono: ");
					scanf("%i",&aux);
					if(esp[aux-1]==1)
					{
						printf("\n\nHemos borrado el registro del coche\n\n");
						esp[aux-1]=0;
						band='V';
						printf("\n\n\t\t");
						system("pause");
					}
					else if(esp[aux-1]==0)
					{
						band='F';
						printf("\n\nEn el lugar seleccionado NO HAY coches\n\n");
						printf("\n\n\t\t");
						system("pause");
					}
					printf("\n\n\t\t(SI NO HAY MAS COCHES INGRESE EL NUMERO 2 PARA SALIR)\n");
					scanf("%i",&salir);
					if (salir==2)
					{
						break;
					}
				}while(band=='F'); break;
		    
			case 3:
		    	printf("\n\n\t\tGRACIAS POR SU VISITA\n\n");
		    	break;
		  
			default:
		    	printf("\n\n\t\tOPCION NO VALIDA\n\n");
		    	printf("\n\n\t\t");
				system("pause");
		}
	}while(opc!=3);
}

