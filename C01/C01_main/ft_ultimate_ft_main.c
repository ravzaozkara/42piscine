/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:23:22 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 13:48:24 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main()
{
    int n;
    int *nbr8;
    int **nbr7;
    int ***nbr6;
    int ****nbr5;
    int *****nbr4;
    int ******nbr3;
    int *******nbr2;
    int ********nbr1;
    int *********nbr;

    n = 12;
    nbr8 = &n;
    nbr7 = &nbr8;
    nbr6 = &nbr7;
    nbr5 = &nbr6;
    nbr4 = &nbr5;
    nbr3 = &nbr4;
    nbr2 = &nbr3;
    nbr1 = &nbr2;
    nbr = &nbr1;

    ft_ultimate_ft(nbr);
    printf("%d", n);
}



