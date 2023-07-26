/*
Este programa representa a las reservaciones de asientos de una compañia aerea con sus normas
Cervantes Martinez Rodrigo Fabian 2PRBM
24/MAYO/2020
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	system ("color 0A");
	int i,j,select,fuma,fila,columna,fumas[5][4],nofumas[6][5],salir,NFC,SFC;
	char band='F';
	
	for(i=0; i<5; i++)
	{
		for (j=0; j<4; j++)
		{
			fumas[i][j]=0;
		}
	}
	
	for(i=0; i<6; i++)
	{
		for (j=0; j<5; j++)
		{
			nofumas[i][j]=0;
		}
	}
	
	do
	{
		system("cls");
		printf("\t\tRESERVACIONES DEL VUELO DE LEON - NUEVO VALLARTA\n\n");
		printf("\n");
		printf("\tNORMAS DE LA COMPANIA\n\n");
		printf("- Las plazas numeradas de 1 a 20 son para FUMADORES\n");
		printf("- Las plazas numeradas del 21 al 50 son para NO FUMADORES\n\n");
		
		printf("\tMENU DE OPCIONES:\n");
		printf("1.- Realizar una reservacion\n2.- Cancelar reservacion\n3.- Salir\n\n");
		printf("ELIGA UNA OPCION: ");
		scanf("%i",&select);
		
		if (SFC==20)
		{
			printf("\n\n\t\tYA NO HAY MAS ESPACIO EN LA SALA DE FUMADORES\n\n\t");
			system("pause");
			break;
		}
	
		if (NFC==30)
		{
			printf("\n\n\t\tYA NO HAY MAS ESPACIO EN LA SALA DE NO FUMADORES\n\n\t");
			system("pause");
			break;
		}
		
		switch (select)
		{
		
			case 1:
			    printf("\nAcaso usted es fumador? (0 = NO, 1 = SI): ");
			    scanf("%i",&fuma);
			  
				if (fuma==0)
			    {
			    	do
				    {
				        printf("Distribucion de los asientos\n\n");
	                  
	                    for(i=0; i<6; i++)
	                    {
		                    printf("Fila %i: ",i+1);
						    for (j=0; j<5; j++)
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
				        if (nofumas[fila-1][columna-1]==1)
				        {
					        printf("\n\t\tEl lugar deseado esta OCUPADO, intente con otro\n\n");
					        band='F';
					        printf("\n\n\t\t");
					        system("pause");
				        }
				        else if (nofumas[fila-1][columna-1]==0)
				        {
					        band='V';
						    printf("\n\n\t\tSu reservacion ha sido completada\n\n");
					        nofumas[fila-1][columna-1]=1;
					        NFC++;
					        printf("\n\n\t\t");
					        system("pause");
				        }
			        }
			        while(band=='F'); 
			        break;
			    }
			    
			    if (fuma==1)
			    {
			    	do
				    {
				        printf("Distribucion de los asientos\n\n");
	                    
	                    for(i=0; i<5; i++)
	                    {
		                    printf("Fila %i: ",i+1);
						    for (j=0; j<4; j++)
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
				        if (fumas[fila-1][columna-1]==1)
				        {
					        printf("\n\t\tEl lugar deseado esta OCUPADO, intente con otro\n\n");
					        band='F';
					        printf("\n\n\t\t");
					        system("pause");
				        }
				        else if (fumas[fila-1][columna-1]==0)
				        {
					        band='V';
						    printf("\n\n\t\tSu reservacion ha sido completada\n\n");
					        fumas[fila-1][columna-1]=1;
					        SFC++;
					        printf("\n\n\t\t");
					        system("pause");
				        }
			        }
			        while(band=='F'); 
			        break;
			    }
			    if (fuma!=0 && fuma!=1)
			    {
			    	printf("\t\tOPCION NO VALIDA\n\n\t");
			    	system("pause");
			    	break;
			    }
			
			case 2:
				printf("\nUsted es un fumador? (0 = NO, 1 = SI): ");
			    scanf("%i",&fuma);
			    if(fuma==0)
			    {
			    do
				{
					printf("Distribucion de los asientos\n\n");
				
					printf("\n\n");
				    for(i=0; i<6; i++)
				    {
					    printf("Fila %i: ",i+1);
					    for (j=0; j<5; j++)
					    {
						    if(nofumas[i][j]==1)
					        {
					            printf(" %i OCUPADO ",j+1);	
					        }
					        else if (nofumas[i][j]==0)
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
					if(nofumas[fila-1][columna-1]==1)
					{
						printf("\n\nHemos borrado su reservacion\n\n");
						nofumas[fila-1][columna-1]=0;
						band='V';
						printf("\n\n\t\t");
						system("pause");
					}
					else if (nofumas[fila-1][columna-1]==0)
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
				}while(band=='F'); 
			     break;
			    }
			    
			    if (fuma==1)
			    {
			    do
				{
					printf("Distribucion de los asientos\n\n");
				
					printf("\n\n");
				    for(i=0; i<5; i++)
				    {
					    printf("Fila %i: ",i+1);
					    for (j=0; j<4; j++)
					    {
						    if(fumas[i][j]==1)
					        {
					            printf(" %i OCUPADO ",j+1);	
					        }
					        else if (fumas[i][j]==0)
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
					if(fumas[fila-1][columna-1]==1)
					{
						printf("\n\nHemos borrado su reservacion\n\n");
						fumas[fila-1][columna-1]=0;
						band='V';
						printf("\n\n\t\t");
						system("pause");
					}
					else if (fumas[fila-1][columna-1]==0)
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
				}while(band=='F'); 
				break;
			    }
			     if (fuma!=0 && fuma!=1)
			    {
			    	printf("\t\tOPCION NO VALIDA\n\n\t");
			    	system("pause");
			    	break;
			    }
			
				
		
			case 3:
				printf("\n\n\t\tGRACIAS POR VISTAR EL SISTEMA DE RESERVACIONES\n\n\t");
				system("pause");
				break;
			
			default:
				printf("\n\n\t\tOPCION NO VALIDA\n\n\t");
				system("pause");
				break;
		}
    }
    while (select!=3);
	getch();
}


