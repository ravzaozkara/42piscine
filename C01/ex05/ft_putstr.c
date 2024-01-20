/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:17:37 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 18:28:29 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		write(1, &str[i], 1);
		str++;
	}
}

int main()
{

	char arr[]= "selam";
	ft_putstr(arr);

}