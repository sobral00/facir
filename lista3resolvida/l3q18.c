#include <stdio.h>
#include <stdlib.h>

//18)Calcule e escreva a tabuada do 8 (1 a 10).

int main()
{
    int n,m,x;
    n=8;
    m=1;

    while(x<80)
    {
        x=n*m;
        printf("%i x %i = %i\n",n,m,x);
        m++;
    }
    return 0;
}
