#include "libft.h"

void	**ft_tabmemdup(void **tab, int i, int j)
{
	char	**src;
	char	**dest;
	int		k;

	k = 0;
	src = (char **)tab;
	dest = (char **)malloc(sizeof(char *) * (i + 1));
	dest[i] = NULL;
	while (k != i)
	{
		dest[k] = ft_strndup(src[k], j);
		k++;
	}
	return ((void **)dest);
}
