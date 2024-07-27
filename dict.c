/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abredimu <abredimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:47:17 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/27 15:46:26 by abredimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "strings.h"
#include "dict.h"
#include "pointer_manipulations.h"

int	read_dict(char *file, char *buffer)
{
	int	file_descriptor;
	int	file_size;

	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor < 0)
	{
		return (0);
	}
	file_size = read(file_descriptor, buffer, BUFFER_SIZE - 1);
	buffer[file_size] = 0;
	return (1);
}

int	parse_dict_line(char *dict_ref, int *i)
{
	int	number;
	int	is_invalid;
	int string_start;
	int	string_end;

	is_invalid = 0;
	number = string_to_number(dict_ref[*i]);
	is_invalid |= move_past_numbers(dict_ref, i);
	is_invalid |= move_past_characters(dict_ref, i, ' ');
	is_invalid |= move_past_single_character(dict_ref, i, ':');
	is_invalid |= move_past_characters(dict_ref, i, ' ');
	string_start = *i;
	is_invalid |= move_to_character(dict_ref, i, '\n');
	string_end = *i;
	(*i)++;
	return (is_invalid);
}

	/**
	 * To do:
	 * - find start to end of numbers in string
	 * - escape ": " and take the string until newline
	 * - fill it inside an array
	*/
/*
char **parse_dict(char *dict)
{
	int	i;
	int	is_invalid;

	i = 0;
	while(dict[i])
	{
		parse_dict_line()
		if (is_invalid)
		{
			return (0);
		}
	}
}
*/