/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <mamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:17:21 by mamir             #+#    #+#             */
/*   Updated: 2024/08/18 23:21:30 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
    av = NULL;
    if (ac == 6)
    {
        printf("success!\n");
    }
    else
    {
        write(2, "error\n", 6);
        exit(0);
    }
    return 0;
}