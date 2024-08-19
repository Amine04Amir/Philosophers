/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <mamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:17:21 by mamir             #+#    #+#             */
/*   Updated: 2024/08/19 14:51:11 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"



void check_args(int ac, char **av)
{
    int i = 1;
    int n;
    
    while (i < ac)
    {
        if (!all_numbers(av[i]))
           ft_error("error!\n");
        if (!(ft_atoi(av[1]) >= 1 && ft_atoi(av[1]) <= 200))
            ft_error("philo error\n");
        if (!(ft_atoi(av[2]) >= 1 && ft_atoi(av[2]) <= 60))
            ft_error("time to die\n");
        if (!(ft_atoi(av[3]) >= 1 && ft_atoi(av[3]) <= 60))
            ft_error("time to eat\n");
        if (!(ft_atoi(av[4]) >= 1 && ft_atoi(av[4]) <= 60))
            ft_error("time to sleep\n");
        n = ft_atoi(av[i]);
        i++;
    }
}

void* routine()
{
    printf("hello\n");
    sleep(2);
    printf("by\n");
    return NULL;
}

int main(int ac, char **av)
{
    pthread_t t1, t2;

    if (ac == 5)
    {
        check_args(ac, av);
        pthread_create(&t1, NULL, &routine, NULL);
        pthread_create(&t2, NULL, &routine, NULL);
        pthread_join(t1, NULL);
        pthread_join(t2, NULL);
    }
    else
        ft_error("Error\nnumber_of_philosophers time_to_die time_to_eat time_to_sleep\n");
    return 0;
}
    