int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isprint(argv[1][0]));
}*/
