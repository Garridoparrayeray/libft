/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrido <ygarrido@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:33:25 by ygarrido          #+#    #+#             */
/*   Updated: 2023/01/10 16:27:12 by ygarrido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total;
	int		i;
	char	*mem;

	total = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	mem = (char *)malloc((total + 1) * sizeof (char));
	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (mem)
	{
		while (*s1)
		{
			mem[i] = (char)*s1;
			s1++;
			i++;
		}
		while (*s2)
		{
			mem[i] = (char)*s2;
			s2++;
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("aa", "bb"));
}*/
