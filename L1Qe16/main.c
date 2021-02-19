#include <stdio.h>
#include <time.h>

int main ()
{
  clock_t t;
  t = clock();

  t = clock() - t;

  printf ("Isso me custou %d clicks (%f segundos).\n",t,((float)t)/CLOCKS_PER_SEC);
  return 0;
}




