char *ft_strjoin(int size, char **strs, char *sep);
#include <stdio.h>

int	main(int ac, char **av)
{
	char *str;
	char *sep;

	sep = ", ";
	str = ft_strjoin(ac, av, sep);
	printf("%s", str);
	return (0);
}
