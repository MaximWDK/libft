int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
        printf("%d\n", ft_isalpha(argv[1][0]));
}*/
