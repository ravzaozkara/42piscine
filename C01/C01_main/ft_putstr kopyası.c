/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:17:37 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 18:26:45 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char arr[]="hello";
	ft_putstr(arr);
}
