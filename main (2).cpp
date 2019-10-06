#include <iostream>

using namespace std;

char str []="abcdefghijklñmnopqrstuvwxyz";
int arr []={1,2,3};

int strLength (char *);
int charPosition(char *, char *);
void Order(int *, int, bool);
void PrintArr(int *);

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
