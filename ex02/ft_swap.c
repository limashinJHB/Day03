/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:50:26 by limashin          #+#    #+#             */
/*   Updated: 2020/07/15 17:01:22 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void ft_swap( int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/* only for testig to save time 
	/*int a = 23, b = 47;
    /*printf("Before swap. a: %d, b: %d\n", a, b);
    /*ft_swap( &a, &b);
    /*printf("After swap.  a: %d, b: %d\n", a, b);
    /*return 0;*/

