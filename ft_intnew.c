#include "libft.h"

int		*ft_intnew(size_t size, int value)
{
	size_t	i;
	int		*new;

	if ((new = (int *)malloc(sizeof(int) * size + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = value;
		i++;
	}
	return (new);
}
