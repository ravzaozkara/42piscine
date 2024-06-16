/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:08:03 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 20:22:47 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int temp;

	while (size >= 0)
	{
		i = 0;
		while ( i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>
int main()
{
	int tab[]={2,1,5,6,7,4,3};
	int size = 7;
	int i = 0;

	ft_sort_int_tab(tab, size);
	while (i <size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

