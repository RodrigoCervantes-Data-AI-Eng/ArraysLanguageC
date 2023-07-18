#include <stdio.h>
#include <conio.h>

void main()
{
    system ("color 0A");
	float M,V[10],mayor=0,menor,aux;
    int i,j,venplus=0;
	printf("\t\tREGISTRO DE VENTAS\n\n");
    printf("Su venta propuesta es: ");
    scanf("%f",&M);
    printf("\n");
    
	for (i=1; i<=10; i++)
    {
    	printf("Ventas del vendedor %i: ",i);
    	scanf("%f",&V[i]);
    }
    printf("----------------------------------------------------------\n");
	printf("\n");
    //Y aquí se define quien superó la venta propuesta.
	for (i=1; i<=10; i++)
    {
    	if (V[i]>M)
    	{
    		printf("El vendedor %i supero la meta del dia con %.2f\n",i,V[i]);
			venplus++;
    	}
    	if (V[i]==M)
    	{
    		printf("La ganancia del vendedor %i es igual a la meta\n",i);
    		venplus++;
    	}
    }
    printf("\nTotal de vendedores acreedores al bonus por superar o igualar la meta: %i",venplus);
    
	for (i=1; i<=10; i++)
    {
        for(j=i+1; j<=10; j++)
        {
            if(V[i]>V[j])
            {
                aux=V[i];
                V[i]=V[j];
                V[j]=aux;
            }
        }
    }
    printf("\n\n-----------------------------------");
    printf("\nVentas de MENOR a MAYOR: \n\n");
    for(i=1; i<=10; i++)
    {
        printf("%.2f\n",V[i]);
    }

	for (i=1; i<=10; i++)
    {
        for(j=i+1; j<=10; j++)
        {
            if(V[i]<V[j])
            {
                aux=V[i];
                V[i]=V[j];
                V[j]=aux;
            }
        }
    }
    printf("\n\n-----------------------------------");
    printf("\nVentas de MAYOR a MENOR: \n\n");
    for(i=1; i<=10; i++)
    {
        printf("%.2f\n",V[i]);
    }	
    
	for (i=1; i<=10; i++)
    {
        if (mayor<V[i])
        {
            mayor=V[i];
        }
    }
	menor=mayor;
    for (i=1; i<=10; i++)
    {
        if (menor>V[i])
        {
            menor=V[i];
        }
    }
    if (mayor>M)
    {
    	 printf("\nLa venta mas ALTA es: %.2f\n",mayor);
    }
    if (M==mayor)
    {
    	printf("\nLa venta mas ALTA es: %.2f es decir igual a la meta propuesta del dia\n",mayor);
    }
    printf("La venta mas BAJA es: %.2f\n",menor);
    
	getch();
}

