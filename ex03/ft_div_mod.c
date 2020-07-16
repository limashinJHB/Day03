/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limashin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 16:20:18 by limashin          #+#    #+#             */
/*   Updated: 2020/07/16 07:59:19 by limashin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void  ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* only for testing to save time 
  /* int a;
   int b;
   int c;
   int d;
   int *ptr;
   int *ptr2;

   a = 3;
   b = 2;
   ptr = &c;
   ptr2 = &d;
   printf("a: %i b: %i\n", a,b);
   ft_div_mod(a,b,ptr,ptr2);
   printf("c: %i d: %i\n", c,d); 
     return 0;
}*/
