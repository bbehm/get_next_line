/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbehm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 11:45:35 by bbehm             #+#    #+#             */
/*   Updated: 2019/11/01 14:30:10 by bbehm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\r' || c == '\f' ||
			c == '\v')
		return (1);
	else
		return (0);
}
