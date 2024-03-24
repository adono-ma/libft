/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:22:05 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 16:25:16 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
		if (i >= '0' && i <= '9')
			return (1);
	return (0);
}
/*
int main(void)
{
	printf("%d\ n", ft_isdigit('s'))
	return (0);


*/