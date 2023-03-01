/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:51:54 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/11/01 23:09:55 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0 && !str)
		return (NULL);
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		j = 0;
		i++;
	}
	return (0);
}
