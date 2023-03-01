/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:28:17 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/31 12:42:55 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	if ((unsigned char)c == 0)
		return (&s1[i]);
	while (i-- > 0)
	{
		if (s1[i] == (unsigned char)c)
		{
			return (&s1[i]);
		}
	}
	if (*s1 == (unsigned char)c)
		return (s1);
	return (0);
}
