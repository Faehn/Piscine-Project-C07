int *ft_range(int min, int max);
#include <stdio.h>

int	main()
{
	int min;
	int max;
	int *tab;
	int size;
	int i;

	min = 23;
	max = 56;
	tab = ft_range(min, max);
	size = max - min;
	i = 0;
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
