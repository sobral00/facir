#include <stdio.h>
#include <stdlib.h>

/*21)	Escreva as seguintes sequências de números: (1, 1 2 3 4 5 6 7 8 9 10) (2, 1 2 3 4 5 6 7 8 9 10)
/(3, 1 2 3 4 5 6 7 8 9 10) (4, 1 2 3 4 5 6 7 8 9 10) e assim sucessivamente, até que o
/primeiro número (antes da vírgula), também chegue a 10.
*/

int main()
{
    int x=1;

    while(x<=10)
    {
        printf("%i, 1 2 3 4 5 6 7 8 9 10\n",x);
        x++;
    }
    return 0;
}
