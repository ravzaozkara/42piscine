/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:24:54 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 18:15:39 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int a, int b)
{
	int	temp;

	temp = a / b;
	b = a % b;
	a = temp;
}

#include <stdio.h>
int main()
{
	int a = 27;
	int b = 6;
	
	ft_ultimate_div_mod(a, b);
	printf("%d\n%d", a, b);
}