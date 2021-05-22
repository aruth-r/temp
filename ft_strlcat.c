/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 14:13:52 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/22 16:06:46 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char *dest;
	size_t n;

	n = strlen(dst);
	dest = dst + n;
	n = dstsize - n -1;
	ft_memcpy((void*)dest, (void *)src, n);
	n = strlen(dst);
	dst[n] = 0;
	return (n);
}
