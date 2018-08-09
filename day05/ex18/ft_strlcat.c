/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 19:07:05 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/09 01:54:12 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int length;
	int i;
	int j;

	length = 0;
	while (dest[length] != '\0')
		length++;
	i = 0;
	while (src[i] != '\0' && (length + i < size))
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	j = 0;
	while (src[j] != '\0')
		j++;
	return (length + i);
}

int		main()
{
	printf("", );
}
