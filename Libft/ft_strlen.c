/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adono-ma <adono-ma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 13:22:21 by adono-ma          #+#    #+#             */
/*   Updated: 2024/02/02 17:56:42 by adono-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    "libft.h"

int   ft_strlen(const char *str)
{
   size_t   i;
   
   i = 0;
   while (str[i] != '\0')
   i++;
   return (0);
}