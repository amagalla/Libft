#include "libft.h"

int ft_num_count(int number)
{
  int i;

  i = 0;
  if (number == 0)
    ++i;
  while (number > 0)
  {
    number /= 10;
    i++;
  }
  return (i);
}
