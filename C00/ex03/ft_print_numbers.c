/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:23:05 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/13 18:34:12 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 0;
	while (i <= 789)
	{
		write(1, &i, 1);
		i++;
	}
}

int main()
{
	ft_printf_numbers();
}
