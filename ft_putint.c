#include "libft.h"

void	ft_putint(int *name, char *separator)
{
	int	i;

	i = 1;
	while (i < name[0] + 1)
	{
		ft_putstr(ft_itoa(name[i]), "");
		if (i + 1 < name[0] + 1)
			ft_putstr(separator, "");
		i++;
	}
}
