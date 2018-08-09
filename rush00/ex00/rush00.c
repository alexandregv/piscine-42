/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguiot-- <aguiot--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:45:57 by aguiot--          #+#    #+#             */
/*   Updated: 2018/08/04 23:25:38 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_wall(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('o');
	else if (i == x && j == 0)
		ft_putchar('o');
	else if (i == 0 && j == y)
		ft_putchar('o');
	else if (i == x && j == y)
		ft_putchar('o');
	else if (i == 0 || i == x)
		ft_putchar('|');
	else if (j == 0 || j == y)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int i;
	int j;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	x--;
	y--;
	j = 0;
	while (j <= y)
	{
		i = 0;
		while (i < x)
		{
			write_wall(i, j, x, y);
			i++;
		}
		write_wall(i, j, x, y);
		ft_putchar('\n');
		j++;
	}
}
