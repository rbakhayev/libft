/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:01:28 by rbakhaye          #+#    #+#             */
/*   Updated: 2022/10/17 12:01:45 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	d_length;
	size_t	s_length;

	s_length = ft_strlen(src);
	d_length = ft_strlen(dst);
	j = d_length;
	i = 0;
	if (d_length < dstsize - 1 && dstsize > 0)
	{
		while (src[i] && d_length + i < dstsize - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	if (d_length >= dstsize)
		d_length = dstsize;
	return (d_length + s_length);
}
