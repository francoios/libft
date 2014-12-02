/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcugy <frcugy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:24:14 by frcugy            #+#    #+#             */
/*   Updated: 2014/11/06 18:24:14 by frcugy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isxdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'f') ||
	(c >= 'A' && c <= 'F'))
		return (1);
	else
		return (0);
}
