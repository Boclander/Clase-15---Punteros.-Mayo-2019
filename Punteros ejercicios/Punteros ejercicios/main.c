#include <stdio.h>
#include <stdlib.h>

/** \brief Pide un valor y lo devuelve a traves de un puntero.
 *
 * \param pValor int* la direccion de memoria de una variable.
 * \return int Error -> 0 / Exito -> 1.
 *
 */
/*int getInt(int* pValor);

int main()
{
    int numero;
    int rta;

    rta=getInt(&numero);
    if(rta == 0)
    {
        printf("No se pudo cargar el numero.\n");
    }
    else{
        printf("El numero es: %d", numero);
    }


    return 0;
}

int getInt(int* pValor)
{
    int retorno=0;

    if(pValor == NULL)
    {
        printf("Ingrese un numero: ");
        scanf("%d", pValor);
        retorno=1;
    }
}
*/


int main()
{
    int* pVector;
    int x;

    pVector=&x;

    printf("%d", pVector);

    return 0;
}
