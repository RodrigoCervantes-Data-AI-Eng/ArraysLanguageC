//Este programa calcula y divide los numeros ingresados en un grupo de pares e impares
//IRVIN ELÍ MORENO CORONA 2PRBM
//12/MAYO/2020

#include <stdio.h>
#include <conio.h>

void main ()
{
	system("color 0A");
	int x,j,aux,num[50],pares[50],impares[50],par,impar;
	printf("\t\tREGISTRO DE NUMEROS DE CALLE\n\n");

	for (x=1; x<=50; x++)
	{
		printf("Ingrese el numero de la casa %i: ",x);
		scanf("%i",&num[x]);
	}
	for (x=1; x<=50; x++)
	{
	    
		if (num[x]%2==0)
		{
			pares[par]=num[x];
			par++;
		}
		else
		{	
			impares[impar]=num[x];
			impar++;
		}
	}
    
    printf("----------------------------------\n");
    printf("Casas con numeros PARES: \n");

	for (x=1; x<par; x++)
    {
    	printf("%i\n",pares[x]);
    }
    
    printf("----------------------------------\n");
    printf("Casas con numeros IMPARES: \n");
    for (x=0; x<impar; x++)
    {
    	printf("%i\n",impares[x]);
    }
	
	getch();
}

