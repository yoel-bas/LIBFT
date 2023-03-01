/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:15:32 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/02 17:56:44 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	num_len(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	int		len;
	char	*res;
	int		i;

	i = 0;
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	len = num_len(nb);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	res[len--] = '\0';
	if (nb < 0)
	{
		i = 1;
		res[0] = '-';
		nb *= -1;
	}
	while (len >= i)
	{
		res[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (res);
}
