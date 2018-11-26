/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:43:42 by mgavillo          #+#    #+#             */
/*   Updated: 2018/11/24 20:55:06 by mgavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char	*d;
	int		i;
	int		j;
	int		l;

	i = 0;
	j = (int)ft_strlen(s) - 1;
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	if (j == -1)
		return ("");
	l = j - i + 1;
	if (!(d = malloc((l + 1) * sizeof(char))))
		return (NULL);
	j = 0;
	while (j != l)
	{
		d[j] = s[i];
		j++;
		i++;
	}
	d[j] = '\0';
	return (d);
}
