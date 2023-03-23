int	*ft_tolowerer(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 32;
	return (i);
}
