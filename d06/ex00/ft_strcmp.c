/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbernar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 18:17:42 by thbernar          #+#    #+#             */
/*   Updated: 2017/08/07 22:07:10 by thbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int value;

	i = 0;
	j = 0;
	value = 0;
	while (s1[i] && s2[i])
	{
		value = s1[i] - s2[i];
		if (value)
			return (value);
		i++;
	}
	return (0);
}
