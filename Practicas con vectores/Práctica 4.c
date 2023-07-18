//Este programa registra 15 numeros y los ordena en PARES de menor a mayor e IMPARES de mayor a menor
//IRVIN ELÍ MORENO CORONA  2PRBM
//12/MAYO/2020

#include <stdio.h>
#include <conio.h>

void main ()
{
	system("color 0A");
	int i,j,aux,num[15],pares[15],impares[15],par,impar=0;
	printf("\t\tCLASE DE ALGEBRA\n\n");

	for (i=1; i<=5; i++)
	{
		printf("Ingrese el dato numerico (%i): ",i);
		scanf("%i",&num[i]);
	}
	for (i=1; i<=5; i++)
	{
	    
		if (num[i]%2==0)
		{
			pares[par]=num[i];
			par++;
		}
		
		else
		{	
			impares[impar]=num[i];
			impar++;
		}
	}
    
	for (i=0; i<par; i++)
    {
        for(j=i+1; j<=par; j++)
        {
            if(pares[i]>pares[j])
            {
                aux=pares[i];
                pares[i]=pares[j];
                pares[j]=aux;
            }
        }
    }
    printf("\n\n-----------------------------------");
    printf("\nNumeros PARES de MENOR a MAYOR: \n\n");
    for(i=1; i<=par; i++)
    {
        printf("%i\n",pares[i]);
    }	

	for (i=0; i<=impar; i++)
    {
        for(j=i+1; j<=impar; j++)
        {
            if(impares[i]<impares[j])
            {
                aux=impares[i];
                impares[i]=impares[j];
                impares[j]=aux;
            }
        }
    }
    printf("\n\n-----------------------------------");
    printf("\nNumeros IMPARES de MAYOR a MENOR: \n\n");
    for(i=1; i<=impar; i++)
    {
        printf("%i\n",impares[i]);
    }
	getch();
}

