/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:16:14 by mleonet           #+#    #+#             */
/*   Updated: 2023/05/04 16:17:51 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_sep(char c, char charset, char const *s, int type)
{
	int	i;

	if (type == 1)
	{
		if (c == charset)
			return (1);
		else
			return (0);
	}
	else
	{
		i = 0;
		while (s[i] && !ft_check_sep(s[i], charset, 0, 1))
			i++;
		return (i);
	}
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
		while (s[i] && ft_check_sep(s[i], charset, 0, 1))
			i++;
		if (s[i] && !ft_check_sep(s[i], charset, 0, 1))
			j++;
		while (s[i] && !ft_check_sep(s[i], charset, 0, 1))
			i++;
	}
	return (j);
}

char	*ft_strdupcharset(char const *s, char charset)
{
	char	*word;
	int		word_len;
	int		i;

	i = 0;
	word_len = ft_check_sep(0, charset, s, 0);
	word = malloc(sizeof(char) * (word_len + 1));
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

char	**ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;

	j = 0;
	if (!s)
		return (0);
	tab = malloc(sizeof(char *) * (ft_countstr(s, c) + 1));
	if (!tab)
		return (0);
	while (*s)
	{
		while (*s && ft_check_sep(*s, c, 0, 1))
			s++;
		if (*s)
		{
			tab[j] = ft_strdupcharset(s, c);
			if (!tab[j++])
				return (ft_free_tab(tab));
		}
		while (*s && !ft_check_sep(*s, c, 0, 1))
			s++;
	}
	tab[j] = 0;
	return (tab);
}
