#include <stdio.h>
int main(void)
{
  int c;
  int i;
  printf("XYZ\n");
  puts("ANOTHER");
  c = getchar();
  
  for (i = 0; i < 100; i++)
  {
	  printf("%c\n" , c );
  }
  
  return 4;
}
