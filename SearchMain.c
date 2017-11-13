#include <stdio.h>
#include "libft.h"

int main()
{
  int value = 43;
  int values[] = {33, 1, 17, 90, 15, 42, 2};
  int n = 7;

  ft_bubblesort(values, n);

  if (ft_search(value, values, n) == 0)
  {
    printf("Found needle!!\n");
    return (0);
  }
  else
  {
    printf("Didn't find needle\n");
    return (1);
  }
}
