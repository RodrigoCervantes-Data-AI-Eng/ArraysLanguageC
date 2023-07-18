#include<stdio.h>
#include<conio.h>
void main()
{
    int i,Aux,Aux1,menor,mayor=0;
    float T[8],suma,M;
    suma=0;
    printf("\t\tSERVICIO METEOROLOGICO NACIONAL\n\n");

    for (i=1; i<=7; i++)
    {
        printf("Registra la temperatura del dia %i de Enero: ",i);
        scanf("%f",&T[i]);
        suma=suma+T[i];
        if (mayor<T[i])
        {
            mayor=T[i];
        }
    }
    menor=mayor;
    for (i=1; i<=7; i++)
    {
        if (menor>T[i])
        {
            menor=T[i];
        }
    }

    M=suma/7;
    printf("\n*****************************************");
    printf("\n* La media de las temperaturas es: %.2f *",M);
    printf("\n*****************************************\n\n");

    for (i=1; i<=7; i++)
    {
        if (T[i]>M)
        {
            printf("Temperatura del dia %i es mayor a la media: %.2f\n",i,T[i]);
        }
        if (T[i]==M)
        {
            printf("Temperatura del dia %i es igual a la media: %.2f\n",i,T[i]);
        }
    }
    printf("\n");
    for (i=1; i<=7; i++)
    {
        if (mayor==T[i])
        {
            printf("El dia %i tuvo la temperatura mas alta\n",i);
        }
        if (menor==T[i])
        {
            printf("El dia %i tuvo la temperatura mas baja\n",i);
        }
    }

    getch();
}
