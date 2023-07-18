#include <stdio.h>
#include <conio.h>

void main()
{
    int i,t,t2;
    t=10;
    t2=20;
    float CA[t],CB[t],CC[t2];
    printf("\t\tCALIFICACIONES DE MATEMATICAS\n\n");
    printf("GRUPO A\n\n");
    for (i=1; i<=10; i++)
    {
        printf("Ingrese la calificacion del alumno %i: ",i);
        scanf("%f",&CA[i]);
    }
    printf("\n-----------------------\n");
    printf("\nGRUPO B\n\n");
    for (i=1; i<=10; i++)
    {
        printf("Ingrese la calificacion del alumno %i: ",i);
        scanf("%f",&CB[i]);
    }
    printf("\n-----------------------\n");
    for (i=1; i<=t; i++)
    {
        CC[i]=CA[i];
    }
    for (i=t+1; i<=t2; i++)
    {
        CC[i]=CB[i-t];
    }
    for (i=1; i<=t2; i++)
    {
        printf("CALIFICACION DEL ALUMNO %i: %.0f\n",i, CC[i]);
    }
    getch();
}
