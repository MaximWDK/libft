/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 14:11:01 by mleonet           #+#    #+#             */
/*   Updated: 2023/04/04 14:55:35 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int		i;
	int		j;
	size_t	sizesrc;
	size_t	sizedst;
	size_t	res;

	sizesrc = ft_strlen(src);
	sizedst = ft_strlen(dst);
	i = 0;
	j = sizesrc;
	if (sizedst < dstsize || dstsize == 0)
		res = sizesrc + sizedst;
	res = sizesrc + dstsize;
	while (src[i] && j < (dstsize - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (res);
}
