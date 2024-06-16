/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 05:08:17 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/19 05:47:21 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void p(char arr[], int n)
{
	for (int i = 0; i < n; i++)
		write(1, (arr+i), 1);
	write(1, " ", 1);
}

void ft_print_combn(int n)
{
		char	arr[n];
		int a = 0;
		while (a < n)
		{
			arr[a] = '0' + a;
			a++;
		}
		int i = 0;
		while(i <= 9)
		{
			p(arr, n);
			if (arr[n] == 9)
			{
				arr[n] = arr[n-1] + 1;
			}
			else
			{
				arr[n]++;
				i++;	
			}
		}
}


int main()
{
	ft_print_combn(2);
}

