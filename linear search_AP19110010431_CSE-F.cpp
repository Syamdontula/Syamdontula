#include <stdio.h>
int main()
{
  int array[100], find, a, b;

  printf("Enter number of elements should be in array\n");
  scanf("%d", &b);

  printf("Enter %d integer(s)\n", b);

  for (a = 0; a < b; a++)
    scanf("%d", &array[a]);

  printf("Enter a number to find\n");
  scanf("%d", &find);

  for (a = 0; a < b; a++)
  {
    if (array[a] == find)    
    {
      printf("%d is present at location %d.\n", find, a+1);
      break;
    }
  }
  if (a == b)
    printf("%d isn't present in the array.\n", find);

  return 0;
}


