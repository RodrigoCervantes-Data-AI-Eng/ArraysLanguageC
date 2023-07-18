#include <stdio.h>
#include <conio.h>

void main()
{
	system ("color 0A");
    int x,car;
    
	printf("\t\tENCRIPTACION DE UNA FRASE\n\n");
	printf("Cuantas letras tiene su frase?: ");
    scanf("%i",&car);
    char FR[car];
    printf("(Ingresa letra por letra de forma vertical)\n");
    printf("Ingresa su frase a encriptar: \n");
   
    
	for (x=0; x<car; x++)
    {
        scanf("%s",&FR[x]);
    }
    printf("\nSu frase ingresada es: ");
    
	for (x=0; x<car; x++)
    {
        printf("%c ",FR[x]);
    }
    printf("\n");
    printf("SU FRASE ENCRIPTADA ES: ");
    for (x=0; x<car; x++)
    {
        printf("%c ",(FR[x]+5));
    }
	getch();
}



