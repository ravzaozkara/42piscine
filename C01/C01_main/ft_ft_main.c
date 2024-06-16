/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:46:17 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/21 09:44:00 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

 void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main()
{
	int sayi = 0;
    int *nbr;
    nbr = &sayi;
	ft_ft(&sayi);
	printf("%d", *nbr);
}

