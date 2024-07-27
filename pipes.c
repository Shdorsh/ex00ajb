/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abredimu <abredimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:58:55 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/27 14:38:17 by abredimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "strings.h"
#include <stdio.h>

int	valid_number_pipe(char *number_string, char *dict)
{
	if (!is_string_number(number_string))
	{
		print("Error\n");
		return (-1);
	}
	print(dict);
	return (0);
}

int	dictionary_pipe(char argument_count, char **arguments)
{
	char	buffer[BUFFER_SIZE];
	char	*number_string;
	int		got_dict;

	if (argument_count == 2)
	{
		got_dict = read_dict("numbers.dict", buffer);
		number_string = arguments[1];
	}
	else
	{
		got_dict = read_dict(arguments[1], buffer);
		number_string = arguments[2];
	}
	if (!got_dict)
	{
		print("Dict Error\n");
		return (-1);
	}
	printf("Number char: %s\n\n\n", number_string);
	return (valid_number_pipe(number_string, buffer));
}
