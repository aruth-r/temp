/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruth-ra <aruth-ra@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:06:01 by aruth-ra          #+#    #+#             */
/*   Updated: 2021/05/22 16:47:48 by aruth-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int main ()
{
	char str[60];
	char dest[60];
	char *s;
	//char *d;
	//size_t len;

	s = &(*str);
	strcpy(str,"This is string.h library function");
	strcpy(dest,"This is string dest");
	//d = ft_strdup(s);
	//puts(d);
	//free(d);

	/*ft_memset(str, 'c' ,7);
	puts(str);

	ft_memcpy(dest, str, 3);
	puts(dest);

	ft_bzero(str, 7);
	puts(str);
	ft_memccpy(dest, str, 'r', 15);
	puts(dest);
	printf("Valor de s = %p \n", s);
	printf("Valor de apontado por s = %c \n", *s);
	printf("Valor de d = %p \n", d);
	printf("Valor de apontado por d = %c \n", *d);

	ft_memmove(d, s, 33);
	puts(s);
	puts(d);
	ft_memmove(s, d, 33);
	puts(s);
	puts(d);

	len = ft_strlen(s);
	printf("Tamanho de s = %ld \n", len);

	len = ft_strlcpy(d, s, 60);
	puts(s);
	puts(d);
	printf("Tamanho de s = %ld \n", len);

	int c;

	c = 31;
	while(c <= 127)
	{
		printf("O valor de c é %d, ", c);
		if(ft_isascii(c))
			printf("c é ascii ");
		if(ft_isprint(c))
		{
			printf("e representa o caracter %c ", c);
			if(ft_isalpha(c))
				printf(", c é letra ");
			if(ft_isdigit(c))
				printf(", c é número ");
			if(ft_isalnum(c))
				printf(", c é alfanumérico");
		}
		c++;
		printf("\n");
	}
	if(ft_isascii(c) == 0)
			printf("c não é ascii \n");

	int c;
	int b;
	int e;
	c = 65;
	b = 0;
	e = 0;
	while(c <= 122)
	{
		if(ft_isalnum(c))
		{
			b = ft_tolower(c);
			e = ft_toupper(c);
			printf("O caracter é %c, lowercase é %c, uppercase é %c \n", c, b, e);
		}
		c++;
	}

	char *a = memchr(s, 's', 35);
	printf("a aponta para: %c \n", *a);

	puts(str);
	puts(dest);

	int x = ft_memcmp(str, dest, 7);
	int y = ft_memcmp(str, dest, 10);
	int z = ft_memcmp(dest, str, 20);
	int w = ft_memcmp(str, str, 70);
	printf("ft_memcmp: \n x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("w = %d \n", w);
	x = ft_memcmp(str, dest, 7);
	y = ft_memcmp(str, dest, 10);
	z = ft_memcmp(dest, str, 20);
	w = ft_memcmp(str, str, 70);
	printf("memcmp: \n x = %d \n", x);
	printf("y = %d \n", y);
	printf("z = %d \n", z);
	printf("w = %d \n", w);

	size_t  t = strlen(str);
	printf("t = %ld \n", t);
	t = strlen(dest);
	printf("t = %ld \n", t);
	t = ft_strlcat(dest, str, 60);
	puts(dest);
	printf("t = %ld \n", t);*/
	puts(str);
	char *a = strchr(s, 's');
	printf("a aponta para: %c \n", *a);
	printf("Endereço de s: %p \nEndereço de a: %p \n", s, a);
	return(0);
}
