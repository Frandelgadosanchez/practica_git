// Se agrega libreria IO
#include <stdio.h>

int main() { 

    int eleccion = 0;
    
// Preguntamos el juego que mas te gusta de la trilogia Souls
// La pregunta se repetira mientras eleccion es distinto de 1 y eleccion es distinto de 2 y eleccion distinto de 3
while (eleccion != 1 && eleccion != 2 && eleccion != 3) {
    printf ("¿Cual es tu juego favorito de la trilogia Souls? \n");
    printf ("1.Dark Souls 1 \n");
    printf ("2.Dark Souls 2 \n");
    printf ("3.Dark Souls 3 \n");
    scanf ("%d", &eleccion);
//Si se introduce un numero que no sea 1 o 2 o 3 se mostrara el mensaje de error y seguira preguntando por el while de arriba
    if (eleccion != 1 && eleccion != 2 && eleccion != 3) {
        printf ("Por favor ingresa el numero que corresponde a tu juego preferido \n");
    }
}
    if (eleccion == 1) {
        printf ("Tambien es mi favorito !! Genial!! \n");
    }
        else if (eleccion == 2) {
            printf ("Aunque haya muchas quejas de el, para mi es el mas completo de todos... pero recuerda que debes subir adaptabilidad");
         }
            else if (eleccion == 3) {
                printf ("Este juego me traumatizo, ya que fue el primero que jugue de la saga");
            }
 return 0;
}