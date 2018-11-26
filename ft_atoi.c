/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 22:03:37 by mgavillo          #+#    #+#             */
/*   Updated: 2018/11/18 20:48:36 by mgavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == ' ' || str[i] == '\r')
	{
		++i;
	}
	if (str[i] == '-')
		neg = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (47 < str[i] && str[i] < 58)
	{
		nb *= 10;
		nb += (int)str[i] - 48;
		++i;
	}
	return (nb * neg);
}