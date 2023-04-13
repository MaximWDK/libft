/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:28:43 by mleonet           #+#    #+#             */
/*   Updated: 2023/04/13 14:41:18 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = -1;
	str = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[++i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
