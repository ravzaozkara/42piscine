/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nozkara <nozkara@student.42istanbul.com.t  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 18:29:18 by nozkara           #+#    #+#             */
/*   Updated: 2023/07/23 19:33:32 by nozkara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i= 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int	main()
{
	char arr[] = "selam";
	printf("%d", ft_strlen(arr));
}

