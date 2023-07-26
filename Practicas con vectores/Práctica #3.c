//Este programa coloca una fila de 20 personas y muestra si los lugares estan libres u ocupados
//Cervantes Martinez Rodrigo Fabian  2PRBM
//13/MAYO/2020

#include<stdio.h>
#include<conio.h>

void main()
{
	system("color 0A");
	int select,i,j,aux,fila[21],dato=1;
	char band='F';
	
	for(i=1; i<=21; i++)
	{
		fila[i]=1;
	}
	do{
		system("cls");
	
		for(i=1; i<=20; i++)
		{
			if(fila[i]==1)
			{
				printf("El lugar %i esta libre\n",i);
			}
			if(fila[i]==2)
			{
				printf("El lugar %i esta ocupado\n",i);
			}
		}
		printf("\n\n\t\tSeleccione una opcion que desea realizar en el BANCO\n\n");
		printf("\n1.- Atender al primero de la fila");
		printf("\n2.- Esperar en la fila");
		printf("\n3.- Salir del programa");
		printf("\nSeleccione su opcion: "); 
		scanf("%i",&select);
		printf("\n\n");
		switch(select)
		{
		
			case 1:
				printf("\n\nAtendiendo al primero de la fila...\n\n");
				fila[20]=1;
				for(i=1; i<=21; i++)
				{
					for(j=1; j<=22; j++)
					{
						aux=fila[j+1];
						fila[j+1]=fila[j];
						fila[j]=aux;
					}
				}
				printf("\n\n\t\t");
				system("pause");
				break;
		
			case 2:
				i=0;
				band='F';
				while((band == 'F') && (i<21)){
					if(fila[i] == dato)
					{
						band='V';
					}
					i++;
				}
				if (band == 'V')
				{
					printf("\n\nSu lugar en la fila es %i. En un momento lo atendemos\n",i-1);
					fila[i-1]=2;
					printf("\n\n\t\t");
					system("pause");
				}
			    if(band == 'F')
				{
					printf("\n\nLa fila esta llena\n");
					printf("\n\n\t\t");
					system("pause");
				}
				break;
				
				case 3:
		    	printf("\n\n\t\tGRACIAS VUELVA PRONTO\n\n");
		    	break;
		       
			    default:
		    	printf("\n\n\t\tOPCION NO VALIDA\n\n");
		    	printf("\n\n\t\t");
				system("pause");	
		}
	}
	while(select!=3);
	getch();
}

