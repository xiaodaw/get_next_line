/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:38:27 by xwang             #+#    #+#             */
/*   Updated: 2018/10/27 23:31:48 by xwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	char *ptr;

	ptr = s1;
	while (*ptr)
		ptr++;
	while (*s2)
		*(ptr++) = *(s2++);
	*ptr = '\0';
	return (s1);
}