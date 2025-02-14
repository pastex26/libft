/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:03:37 by lmarcucc          #+#    #+#             */
/*   Updated: 2025/01/06 16:10:30 by lmarcucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s, int len)
{
	char	*res;
	size_t	i;

	res = ft_calloc(len + 1, sizeof(char));
	if (!res)
		return (perror("malloc fail ft_strndup"), NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
