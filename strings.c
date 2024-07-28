/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abredimu <abredimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 07:20:32 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/27 15:03:46 by abredimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "chars.h"

int	is_string_number(char *string)
{
	while (*string)
	{
		if (!char_is_number(*string))
		{
			return (0);
		}
		string++;
	}
	return (1);
}

long	string_to_number(char *string)
{
	long	result;

	result = 0;
	while (*string)
	{
		if (!is_string_number(string))
		{
			return (result);
		}
		result *= 10;
		result += (*string - '0') % 10;
		string++;
	}
	return (result);
}

int	count_num_chars(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	return (i);
}

char	*find_substring(char *string, char *substring)
{
	int	i;

	while (string)
	{
		i = 0;
		while (string[i] == substring[i])
		{
			i++;
			if (!substring[i])
			{
				return (string);
			}
		}
		string++;
	}
	return (0);
}

void	print(char *string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		i++;
	}
	write(STDOUT_FILENO, string, i);
}
