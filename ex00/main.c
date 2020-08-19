char	*ft_strdup(char *src);
#include <stdio.h>

int		main(int ac, char **av)
{
	(void) ac;
	char *str;

	str = ft_strdup(av[1]);
	printf("%s", str);
}

