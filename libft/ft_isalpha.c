/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbicer    <vbicer@student.42kocaeli.>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:44:53 by vbicer            #+#    #+#             */
/*   Updated: 2024/10/16 21:47:52 by vbicer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int x)
{
	if ((x <= 'Z' && x >= 'A') || (x <= 'z' && x >= 'a'))
		return (1);
	return (0);
}
