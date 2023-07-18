#include <stdio.h>
#include <conio.h>
void main ()
{
    int x,can,T,a=0,e=0,i=0,o=0,u=0;
    printf("Cuantas letras tiene su nombre?: ");
    scanf("%i",&can);
    char nombre[can];
    printf("Escribe tu nombre: \n");
    for (x=0; x<can; x++)
    {
        scanf("%s",&nombre[x]);
    }
    printf("\nEste es tu nombre: \n\n");
    for (x=0; x<can; x++)
    {
        printf("%c",nombre[x]);
    }
    printf("\n");
    for (x=0; x<can; x++)
    {
        switch(nombre[x])
        {
            case 'a': a++; break;
            case 'e': e++; break;
            case 'i': i++; break;
            case 'o': o++; break;
            case 'u': u++; break;
            case 'A': a++; break;
            case 'E': e++; break;
            case 'I': i++; break;
            case 'O': o++; break;
            case 'U': u++; break;

        }
    }
    T=a+e+i+o+u;
    printf("\n\nTotal de vocales en tu nombre: %i\n\n",T);
    printf("Su nombre tiene %i vocales de a\n",a);
    printf("Su nombre tiene %i vocales de e\n",e);
    printf("Su nombre tiene %i vocales de i\n",i);
    printf("Su nombre tiene %i vocales de o\n",o);
    printf("Su nombre tiene %i vocales de u\n",u);
    getch();
}
