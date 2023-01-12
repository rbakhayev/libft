/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:59:09 by rbakhaye          #+#    #+#             */
/*   Updated: 2022/10/17 11:59:11 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*p;

	if (b == NULL)
		return (NULL);
	p = b;
	while (len)
	{
		*(unsigned char *)b = (unsigned char)c;
		b++;
		len--;
	}
	return (p);
}
