/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sguntepe <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 01:17:52 by sguntepe          #+#    #+#             */
/*   Updated: 2023/03/29 01:18:04 by sguntepe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int strcmp(const char* str1, const char* str2) {
    while (*str1 && *str2 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}