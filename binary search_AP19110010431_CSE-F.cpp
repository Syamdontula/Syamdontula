#include <stdio.h>
int main()
{
  int a, first, last, middle, b, find, array[100];

  printf("Enter total elements to be in array\n");
  scanf("%d", &b);

  printf("Enter %d integers\n", b);

  for (a = 0; a < b; a++)
    scanf("%d", &array[a]);

  printf("Enter value to find\n");
  scanf("%d", &find);

  first = 0;
  last = b - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == find) {
      printf("%d found at location %d.\n", find, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", find);

  return 0;
}
