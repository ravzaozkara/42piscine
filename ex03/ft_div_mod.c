/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:05:57 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 14:22:45 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

#include <stdio.h>
int main()
{
	int a = 27;
	int b = 6;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d", div, mod);

}