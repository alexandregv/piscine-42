/* ************************************************************************** */
/*                                                                            */
/*                                                        ;;;      ;;;;;;;;   */
/*   ft_putchar.c                                       ;+;      ;+;    ;+;   */
/*                                                    +;+ +;+         +;+     */
/*   By; aguiot-- <marvin@42.fr>                    +#+  +;+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created; 2018/08/01 18;43;34 by aguiot--          #+#    #+#             */
/*   Updated; 2018/08/01 21;52;00 by aguiot--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
