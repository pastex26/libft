/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarcucc <lmarcucc42lyon.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 22:02:49 by lmarcucc          #+#    #+#             */
/*   Updated: 2024/12/30 14:25:09 by lmarcucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_isalpha(int c)
{
	if (ft_islower(c) || ft_isupper(c))
	{
		return (true);
	}
	return (false);
}
