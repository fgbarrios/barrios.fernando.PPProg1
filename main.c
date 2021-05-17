#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
    char nombre[21];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais paises, char pais[], int recuperados);

void invertirCadena(char cadena[]);

void ordenarCaracteres(char* cadena[]);

int main()
{
    ePais paises[] = {
        {100,"Francia",20,10,1},
        {100,"Alemania",50,20,5},
        {100,"India",200,100,30},
    };

    char cadena = "UTN-FRA";
    char algoritmo = "algoritmo";

    //printf("Hello world!\n");
    actualizarRecuperados(ePais pais,"Francia",2);

    printf("%s\n", cadena);
    invertirCadena(cadena);

    ordenarCaracteres(&algoritmo);

    return 0;
}

void actualizarRecuperados(ePais paises, char pais[], recuperados){
    if(pasi != NULL && paises != NULL && recuperados > 0){

        for (int i = 0;i < recuperados ;i++ )
        {
            paises[i].recuperados += recuperados;
        }
    }
}

void invertirCadena(char cadena[]){
    int largoCadena = strlen(cadena);
    for (int i= largoCadena;i >= 0 ;i-- )
    {
        printf("%c", cadena[i]);
    }
    printf("\n");
}


void ordenarCaracteres(char* cadena[]){
    int c1,c2,aux;
    if(cadena != NULL)
    {

    }
}

