/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:16:14 by mleonet           #+#    #+#             */
/*   Updated: 2023/04/12 15:48:47 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_sep(char c, char charset)
{
	if (!charset)
		return (0);
	if (c == charset || c == '\0')
		return (1);
	return (0);
}

int	ft_countstr(char const *s, char charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && ft_check_sep(s[i], charset))
			i++;
		if (s[i] && !ft_check_sep(s[i], charset))
			j++;
		while (s[i] && !ft_check_sep(s[i], charset))
			i++;
	}
	return (j);
}

int	ft_strlen_to_next_sep(char const *s, char charset)
{
	int	i;

	i = 0;
	while (s[i] && !ft_check_sep(s[i], charset))
		i++;
	return (i);
}

char	*ft_strdup(char const *s, char charset)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	word_len = ft_strlen_to_next_sep(s, charset);
	word = (char *) malloc(sizeof(char) * (word_len + 1));
	if (!word)
		return (0);
	while (s[i] && i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;

	j = 0;
	if (!s)
		return (0);
	tab = (char **)malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (!tab)
		return (0);
	while (*s)
	{
		while (*s && ft_check_sep(*s, c))
			s++;
		if (*s)
			tab[j++] = ft_strdup(s, c);
		while (*s && !ft_check_sep(*s, c))
			s++;
	}
	tab[j] = 0;
	return (tab);
}
