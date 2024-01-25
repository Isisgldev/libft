/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isgomez- <isgomez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:18:47 by isgomez-          #+#    #+#             */
/*   Updated: 2024/01/24 18:05:16 by isgomez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isprint(int i);
int		ft_isascii(int i);
int		ft_toupper(int i);
int		ft_tolower(int i);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *ptr, int x, size_t n);
void	ft_bzero(void *s, size_t n);

#endif
