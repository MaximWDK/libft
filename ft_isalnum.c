int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isalnum(argv[1][0]));
}*/
