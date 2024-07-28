/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 12:58:55 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/28 19:02:37 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include "strings.h"
#include "slice.h"
#include "structs.h"
#include <stdio.h>

int	parse_dict_pipe(t_input input)
{
	int		i;
	int		is_invalid;

	i = 0;
	is_invalid = parse_dict(input.dict);
	if (is_invalid)
	{
		print("Dict Error\n");
		return (-1);
	}
	return (0);
}

int	valid_number_pipe(t_input input)
{
	int	number_digits;

	if (!is_string_number(input.number))
	{
		print("Error\n");
		return (-1);
	}
	number_digits = count_num_chars(input.number);
	return (parse_dict_pipe(input));
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
	return (valid_number_pipe(new_input(number_string, buffer)));
}
