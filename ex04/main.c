int	ft_convert_base(char *str, char *base_from, char *base_to);
#include <stdio.h>

int main(void)
{
	char str[] = "  \t\v\r \t\n \f\t \f\n \f+----+-+--+542a45b2jk5jy15j1t212g";
	char base_from[] = "0123456789abc";
	char base_to[] = "0123"

	printf("%s\n%s\::", str);
	printf("%s", ft_convert_base(str, base_from, base_to));
	return (0);
}
