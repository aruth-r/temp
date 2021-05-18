/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:06:01 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/17 16:58:11 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main () {
   char str[50];
   char dest[50];

   strcpy(str,"This is string.h library function");
   //puts(str);

   strcpy(dest,"This is the dest string");

   /*ft_memset(str, 'c' ,7);
   puts(str);

   ft_memcpy(dest, str, 3);
   puts(dest);

   ft_bzero(str, 7);
   puts(str);*/

   ft_memccpy(dest, str, 'r', 15);
   puts(dest);

   return(0);
}

