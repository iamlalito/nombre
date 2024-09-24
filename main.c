#include <conio.h>
#include <stdio.h>

int main ()
{
    char nombre [20]; char apellido [20];
    printf("introduzca su nombre:");
    scanf("%s", nombre);
    printf("introduzca su apellido:");
    scanf("%s", apellido);

    printf("hola %s %s, buenos dias.", nombre, apellido);
    getch();
    return 0;
}
