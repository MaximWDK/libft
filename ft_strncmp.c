/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:15:58 by mleonet           #+#    #+#             */
/*   Updated: 2023/04/04 15:26:37 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				res;

	i = 0;
	res = 0;
	if (n == 0)
		return (0);
	while (s1 && s2 && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
