#include <stdio.h>

int main()
{
    int mat[4] = {1,2,3,4}, *p, x;

   //p = mat + 1;
   //p = mat++;
   //p = ++mat;
   x = (*mat)++;

    printf("%d", x);
    return 0;
}
