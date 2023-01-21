/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:52:23 by juwkim            #+#    #+#             */
/*   Updated: 2022/04/24 15:52:54 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lower(char c)
{
	return (('a' <= c) && (c <= 'z'));
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!is_lower(*str++))
			return (0);
	}
	return (1);
}
