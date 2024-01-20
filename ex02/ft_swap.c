/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 13:54:07 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 14:04:02 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int a, int b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
}

#include <stdio.h>
int main()
{
	int a = 4;
	int b = 7;

	ft_swap(a, b);
	printf("%d\n%d", a, b);
}