#include <stdio.h>

int main()
{
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;
    p == &i;
    *p - *q;
    printf("%d \n", (3 - *p/(*q) + 7));
    return 0;
}
