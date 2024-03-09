/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 18:48:31 by adono-ma          #+#    #+#             */
/*   Updated: 2024/03/09 16:25:16 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"

int ft_isalnum(int i)
{
    if ((ft_isalpha(i) == 1) || (ft_isdigit(i) == 1))
        return (1);
    return 0;
}