/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dengstra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/12 15:56:33 by dengstra          #+#    #+#             */
/*   Updated: 2017/03/20 10:21:05 by dengstra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, const char *src)
{
	char *temp;

	temp = dest;
	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
