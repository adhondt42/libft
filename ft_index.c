#include "libft.h"

int		ft_index(const char *str, char c)
{
	int		index;

	index = 0;
	while (str[index] && str[index] != c)
		index++;
	if (!str[index])
		index = -1;
	return (index);
}
