/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 01:24:36 by mleonet           #+#    #+#             */
/*   Updated: 2023/05/08 16:06:02 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_sign(const char *str, int *sign)
{
	int	i;

	i = 0;
	*sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		i++;
		*sign = -1;
	}
	else if (str[i] == '+')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long int	result;
	long int	temp;

	temp = 0;
	result = 0;
	i = ft_sign(str, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i++] - '0';
		if (temp > result && sign > 0)
			return (-1);
		else if (temp > result && sign < 0)
			return (0);
		temp = result;
	}
	return (result * sign);
}
