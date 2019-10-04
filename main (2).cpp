#include <iostream>

/*
Implementar en una función el siguiente algoritmo para ordenar un array de enteros.
La idea es recorrer simultáneamente el array desde el principio y desde el final, comparando los elementos. Si los valores comparados no están en el orden adecuado, se intercambian y se vuelve a empezar el bucle. Si están bien ordenados, se compara el siguiente par.
El proceso termina cuando los punteros se cruzan, ya que eso indica que hemos comparado la primera mitad con la segunda y todos los elementos estaban en el orden correcto.
Usar una función con tres parámetros:
void Ordenar(int* vector, int nElementos, bool ascendente);
De nuevo, no se deben usar enteros, sólo punteros y aritmética de punteros.
*/

using namespace std;

char str []="abcdefghijklñmnopqrstuvwxyz";
int arr []={1,2,3};

int strLength (char *str);
int charPosition(char *ptr, char *c);
void Order(int *arr, int nElements, bool asc);
void PrintArr(int *arr);

int main()
{
    int length= strLength(str);
    char c = 'z';
    int charPos = charPosition(str,&c);
    cout<<"String length "<<length<<endl;
    cout<<"The position of the character is "<<charPos<<endl;
    return 0;
}

int strLength(char *str)
{
    char *cp = str;
    while(*str)
    {
        str++;
    }
    return(str-cp);
}

int charPosition(char *ptr, char *c)
{
    int pos = 0;
    bool is = false;
    while(*ptr)
    {
        if(*ptr!=*c && !is)
        {
            is=false;
            pos++;
        }
        else
        {
            is=true;
        }
        ptr++;
    }
    if(!is)pos=-1;
    return pos;
}

void Order(int *arr, int nElements, bool asc)
{

}

void PrintArr(int *arr)
{

}
