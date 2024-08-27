/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <mamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:17:21 by mamir             #+#    #+#             */
/*   Updated: 2024/08/26 18:29:57 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int kora = 0;
pthread_mutex_t mutex;

int check_args(int ac, char **av)
{
    int i = 1;
    int n;
    
    while (i < ac)
    {
        if (!all_numbers(av[i]))
           return 0;
        if (!(ft_atoi(av[1]) >= 1 && ft_atoi(av[1]) <= 200))
            return 0;
        if (!(ft_atoi(av[2]) >= 1 && ft_atoi(av[2]) <= 60))
            return 0;
        if (!(ft_atoi(av[3]) >= 1 && ft_atoi(av[3]) <= 60))
            return 0;
        if (!(ft_atoi(av[4]) >= 1 && ft_atoi(av[4]) <= 60))
            return 0;
        n = ft_atoi(av[i]);
        i++;
    }
    return 1;
}
void* routine()
{
    pthread_mutex_lock(&mutex);
    kora++;
    pthread_mutex_unlock(&mutex);
    printf("k : %d\n", kora);
    return NULL;
}

void create_thread(int n)
{
    pthread_t p[n];
    int i;

    i = 0;
    while (i < n)
    {
        pthread_create(&p[i], NULL, &routine, NULL);
        printf("thread :%d started\n", i);
        i++;
    }
    i = 0;
    while (i < n)
    {
        pthread_join(p[i], NULL);
        printf("thread %d finished\n", i);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 5)
    {
        if (!check_args(ac, av))
            return 1;
        pthread_mutex_init(&mutex, NULL);
        create_thread(3);
        pthread_mutex_destroy(&mutex);
    } 
    else
        return 1;
    return 0;
}
    