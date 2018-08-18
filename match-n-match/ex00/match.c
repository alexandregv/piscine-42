/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:56:30 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/12 21:29:08 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		match(char *str1, char *str2)
{
	if (*str1 == '\0' && *str2 == '*')
		return (match(str1, str2 + 1));
	else if (*str1 != '\0' && *str2 == '*')
		return (match(str1 + 1, str2) || match(str1, str2 + 1));
	else if (*str1 != '\0' && *str2 != '\0' && (*str1 == *str2))
		return (match(str1 + 1, str2 + 1));
	else if (*str1 == '\0' && *str2 == '\0')
		return (1);
	return (0);
}
