/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <mamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:17:21 by mamir             #+#    #+#             */
/*   Updated: 2024/08/19 13:19:40 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

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

    av = NULL;
    if (ac == 6)
        printf("success!\n");
    else
    {
        write(2, "error\n", 6);
        exit(0);
    }
    pthread_create(&t1, NULL, &routine, NULL);
    pthread_create(&t2, NULL, &routine, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    return 0;
}
    