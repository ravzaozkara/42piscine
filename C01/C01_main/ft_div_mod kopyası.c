/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:05:57 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 14:20:36 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if( b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main()
{
	int a = 25;
	int b = 12;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("bolum %d   kalan %d", div, mod);
}	
