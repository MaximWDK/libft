#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%zu\n", ft_strlen(&argv[1][0]));
}*/