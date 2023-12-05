/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-mqa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:04:42 by abel-mqa          #+#    #+#             */
/*   Updated: 2023/10/04 21:04:46 by abel-mqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

void ft_putstr(char *s, int fd) {
	if (!s)
		return;
	while(*s) 
		write(fd, s++, 1);
}

int ft_strlen(char *s)
{
	if (!s)
		return (0);
	int i = 0;
	while (s[i])
		i++;
	return (i);
}
