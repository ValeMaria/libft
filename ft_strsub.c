/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 14:42:28 by mgavillo          #+#    #+#             */
/*   Updated: 2018/11/18 21:29:50 by mgavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	if (s)
	{
		if (!(d = malloc((len + 1) * sizeof(char))))
			return (NULL);
		while (i < len)
		{
			d[i] = s[start];
			i++;
			start++;
		}
		d[i] = '\0';
		return (d);
	}
	return (NULL);
}
