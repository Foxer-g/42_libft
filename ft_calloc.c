/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toespino <toespino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:30:46 by toespino          #+#    #+#             */
/*   Updated: 2025/11/04 18:51:36 by toespino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mas;
	void	*res;

	if (nmemb > 0 && size > ((size_t)-1) / nmemb)
	{
		return (0);
	}
	mas = nmemb * size;
	res = malloc(mas);
	if (!res)
		return (NULL);
	ft_bzero(res, mas);
	return (res);
}
