#include <stdio.h>
#include <stdlib.h>

//19)Calcule e escreva os números ímpares entre 1 (inclusive) e 100 (inclusive).

int main()
{
    int x=0;

    while(x<=100)
    {
    if(x%2!=0)
    {
        printf("%i\n",x);
    }
        x++;
    }
    return 0;
}
