#include "libft.h"

void ft_selectionsort(int values[], int n)
{
    int i;
    int j;

    i = 0;
    while(i < n)
    {
      j = i;
      while (j < n)
      {
        if (values[i] > values[j])
          ft_swap(&values[i], &values[j]);
        ++j;
      }
      ++i;
    }
}
