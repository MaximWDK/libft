/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonet <mleonet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 01:26:04 by mleonet           #+#    #+#             */
/*   Updated: 2023/04/04 15:25:37 by mleonet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
size_t	strlcat(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
size_t	ft_strlen(const char *str);
int		strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
