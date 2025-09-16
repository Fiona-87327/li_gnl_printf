/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiyawang <jiyawang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 16:05:49 by jiyawang          #+#    #+#             */
/*   Updated: 2025/07/21 09:49:54 by jiyawang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}


 int main() 
 {
    char src[7] = "Coucou";
     char dest[7];

     int longueur = ft_strlcpy(dest, src, 3);

     ft_printf("src is: %s\n", src);
     ft_printf("dest is: %s\n", dest);
     ft_printf("long:%d\n", longueur);
     return 0;
 }