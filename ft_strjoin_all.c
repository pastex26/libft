/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lucas@student.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:52:30 by lmarcucc          #+#    #+#             */
/*   Updated: 2025/02/17 11:13:15 by lmarcucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_all(size_t	str_nb, ...)
{
	va_list	args;
	char	*res;
	size_t	i;

	va_start(args, str_nb);
	res = NULL;
	i = 0;
	while (i < str_nb)
	{
		res = ft_strjoin_free(res, va_arg(args, char *));
		if (!res)
			return (NULL);
		i++;
	}
	va_end(args);
	return (res);
}
