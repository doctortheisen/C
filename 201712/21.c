/*function to accept an integer*/

#include <stdio.h>

int main()
{
  int i;
  for (i = 1; i < 10; i++)
  {
    if (i < 5 || i == 9) 
    {
      printf("%d", i);
    }
  }

 return 0;
  
}
