/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 19:36:00 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 20:02:23 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int temp;

	i = 0;
	j = size - 1;
	while ( i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

#include <stdio.h>
int main()
{
	int tab[]={1,2,3,4,5,6,7};
	int size = 7;
	int i = 0;

	ft_rev_int_tab(tab, size);
	while (i <size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}

	
