int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isdigit(argv[1][0]));
}*/