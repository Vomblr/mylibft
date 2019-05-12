/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcomet <mcomet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:48:00 by Dmitry            #+#    #+#             */
/*   Updated: 2019/04/16 12:29:30 by mcomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*p_dst;
	const char	*p_src;

	while (!dst && !src)
		return (NULL);
	p_dst = (char*)dst;
	p_src = (const char*)src;
	while (n--)
		*p_dst++ = *p_src++;
	return ((void*)dst);
}
