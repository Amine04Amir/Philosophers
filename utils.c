/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <mamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:26:52 by mamir             #+#    #+#             */
/*   Updated: 2024/08/23 15:31:30 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int ft_atoi(const char *str)
{
    int i;
    int r;
    int s;
    
    i = 0;
    r = 0;
    s = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            s = -s;
        i++;
    } 
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return (r * s);
}

int is_digit(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int all_numbers(const char *str)
{
    int i = 0;

    if (str[i] == '+' || str[i] == '-')
        i++;
    if (!is_digit(str[i]))
        return 0;
    while (str[i])
    {
        if (!is_digit(str[i]))
            return 0;
        i++;    
    }
    return 1;
}

