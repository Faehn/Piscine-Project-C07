char	*ft_convert_base(char *str, char *base_from, char *base_to);
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str[] = "  \t\v\r \t\n \f\t \f\n \f+----+-+--+-a648y15j1t212g";
	char base_from[] = "abcdefghijklmnopqrstuvwxyz";
	char base_to[] = "0123456789";
	char *dest;

	dest = ft_convert_base(str, base_from, base_to);
	printf("Nombre original : %s\nDonne en base : %s\nDemande en base : %s\n", str, base_from, base_to);
	printf("Nombre sorti : %s\n", dest);
	free(dest);
	return (0);
}
