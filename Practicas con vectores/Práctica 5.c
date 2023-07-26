//Este programa simula el funcionamiento de una pila, donde puedes colocar datos y sacarlos para volver a llenar la pila
//Cervantes Martinez Rodrigo Fabian  2PRBM
//13/MAYO/2020


#include<stdio.h>
#include<conio.h>

void main()
{
	system("color 0A");
	int ent[10],i,j,aux=1,opc;
	for(i=0; i<10; i++)
	{
		ent[i]=1;
	}
	do{
		system("cls"); 
		printf("\t\tPILA\n\n");
		printf("1.- Colocar datos en la pila\n");
		printf("2.- Sacar datos de la pila\n");
		printf("3.- Evacuar programa\n\n");
		printf("Seleccione una opcion: ");
		scanf("%i",&opc);
		switch(opc)
		{
			case 1:
				if(aux==0)
				{
					printf("\nLa Pila esta llena \n\n\t\tVACIAR DE INMEDIATO!!\n\n");
					printf("\n\n\t\t");
					system("pause");
				}
				else if(aux==1)
				{
					for(i=0; i<10; i++)
					{
						printf("Inserte un numero: ");
						scanf("%i",&ent[i]);
						if(ent[10]!=0)
						{
							aux=0;
						}
					}
				}
				break;
			case 2:
			    if (aux==1)
			    {
			    	printf("\nLa Pila esta vacia");
			    	printf("\n\n\t\t");
					system("pause");
			    }
			    else
			    {
			    	for(i=9; i>=0; i--)
			    	{
			    		printf("\nSalida es: %i",ent[i]);
			    		aux=1;
			    		printf("\n\n\t\t");
					    system("pause");
			    	}
			    }
				break;
			//Opción de salir.
			case 3:
		    	printf("\n\n\t\tFINAL DEL PROGRAMA\n\n");
		    	system("pause\n\n");
		    	printf("\t\t\nCERRANDO...\n\n");
		    	break;
		    //Opciones por defecto.
			default:
		    	printf("\n\n\t\tOPCION NO VALIDA\n\n");
		    	printf("\n\n\t\t");
				system("pause");
		}
	}while(opc!=3);
	getch();
}


