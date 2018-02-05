#include "libft.h"
#include <stdio.h>

char	**ft_tabtabdup(char **src, int itt, int it)
{
	char	**dest;
	int		k;
	int		tlen;

	if (itt <= 0 || it <= 0 || src == NULL)
		return (NULL);
	itt = (int)(ft_tablen(src)) > itt ? itt : (int)(ft_tablen(src));
	k = 0;
	dest = (char **)malloc(sizeof(char *) * (itt + 1));
	dest[itt] = NULL;
	while (k != itt  && src[k] != NULL)
		{
			
			tlen = (int)(ft_strlen(src[k])) > it ? it : (int)ft_strlen(src[k]);
			printf("tlen : %d, strlensrck : %zu", tlen, ft_strlen(src[k]));
			dest[k] = ft_strndup(src[k], tlen);
			k++;
		}
	return (dest);
}
