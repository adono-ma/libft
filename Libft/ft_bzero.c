/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:41:51 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 22:14:46 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_bzero(void *trs, size_t n)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = (char *)trs;
	while (i < n)
	{
		cpy[i] = '\0';
		i++;
	}
}