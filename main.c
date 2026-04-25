#include "ft_printf.h"

int	main(void)
{
	int		len;
	char	*ptr;

	ptr = "ASDASD";
	len = ft_printf("HELLO WORLD %i %p \n %x", 41, ptr, 1234124);
	printf("Total printed: %d\n", len);
	return (0);
}
