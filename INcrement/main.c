#include <stdio.h>
int printvalue(int i);

int main()
{
int i=0;
  printvalue(i);
    printvalue(i);
  printvalue(i);
   printvalue(i);
        printvalue(i);

return 0;
}
int printvalue(int i)
{
    i=i+1;
    printf("Called %d times\n",i);
    return i;
}
