/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamir <mamir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:16:01 by mamir             #+#    #+#             */
/*   Updated: 2024/08/23 15:31:23 by mamir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <pthread.h>


typedef struct s_data
{
    int n;
    struct t_data *next;
    struct t_data *prev;
    
}   t_data; 

int     ft_atoi(const char *str);
int     is_digit(char c);
int     all_numbers(const char *str);



#endif