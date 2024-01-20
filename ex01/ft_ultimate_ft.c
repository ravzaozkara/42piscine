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

void	ft_ultimate_ft(int ***nbr)
{
	***nbr = 42;
}

#include <stdio.h>
int main()
{
	int n;
	int *nbr2;
	int **nbr1;
	int ***nbr;

	nbr2 = &n;
	nbr1 = &nbr2;
	nbr = &nbr1;

	ft_ultimate_ft(&nbr1);
	printf("%d", **nbr1);


}
