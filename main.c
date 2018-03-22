#include "libft.h"

int main(int argc, char **argv)
{
	char *t1;
	char *t2;
	char *t3;

	if (argc != 2)
		return (0);
	t2 = ft_strdup("CICI");
	t1 = ft_strdup("BABA");
	t3 = ft_strjoin_free(t1, t2, ft_atoi(argv[1]));
	ft_putstr(t3);
	free(t2);
	return (0);

}
