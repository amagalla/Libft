#include "libft.h"

void	ft_swap_char(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
