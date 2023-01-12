/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:01:14 by rbakhaye          #+#    #+#             */
/*   Updated: 2022/10/17 12:01:17 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		tot_length;
	int		i;
	int		t;
	char	*j;

	i = 0;
	t = 0;
	if (!s1 || !s2)
		return (NULL);
	tot_length = ft_strlen(s1) + ft_strlen(s2) + 1;
	j = (char *)malloc(sizeof(char) * tot_length);
	if (!j)
		return (NULL);
	while (s1[t])
		j[i++] = s1[t++];
	t = 0;
	while (s2[t])
		j[i++] = s2[t++];
	j[i] = '\0';
	return (j);
}
