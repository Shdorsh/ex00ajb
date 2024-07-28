/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:47:17 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/28 20:05:59 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "chars.h"
#include "dict.h"
#include "pointer_manipulations.h"
#include "slice.h"
#include "strings.h"
#include "structs.h"

int	read_dict(char *file, char *buffer)
{
	int	file_descriptor;
	int	file_size;

	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor < 0)
	{
		return (0);
	}
	file_size = read(
			file_descriptor,
			buffer,
			(BUFFER_SIZE - 1) * sizeof (char)
			);
	buffer[file_size] = 0;
	return (1);
}
	/**
	 * To do:
	 * - find start to end of numbers in string
	 * - escape ": " and take the string until newline
	 * - fill it inside an array
	*/

int	parse_dict(char *dict_ref)
{
	int		i;
	int		is_invalid;
	t_slice	number;
	t_slice	word;

	i = 0;
	while (dict_ref[i])
	{
		is_invalid = get_slice_from_line(dict_ref, &i, &number, &word);
		if (is_invalid)
		{
			return (1);
		}
		print_slice(number);
		print_slice(word);
		printf("\n");
	}
	return (0);
}

int	get_slice_from_line(char *dict_ref, int *i, t_slice *number, t_slice *word)
{
	t_parser_inter	parser_inter;
	int				is_invalid;

	is_invalid = parse_dict_line(dict_ref, i, &parser_inter);
	if (!is_invalid)
	{
		if (!dict_ref[*i])
		{
			return (0);
		}
		is_invalid |= new_slice(
				number, dict_ref,
				parser_inter.number_start, parser_inter.number_end
				);
		is_invalid |= new_slice(
				word, dict_ref,
				parser_inter.word_start, parser_inter.word_end
				);
	}
	return (is_invalid);
}

int	parse_dict_line(
		char *dict_ref,
		int *i,
		t_parser_inter *parser_inter
	)
{
	int	is_invalid;

	is_invalid = move_to_past_backspaces_to_number(dict_ref, i);
	parser_inter->number_start = *i;
	is_invalid |= move_past_numbers(dict_ref, i);
	parser_inter->number_end = *i;
	move_past_characters(dict_ref, i, ' ');
	is_invalid |= move_past_single_character(dict_ref, i, ':');
	move_past_characters(dict_ref, i, ' ');
	parser_inter->word_start = *i;
	is_invalid |= move_to_character(dict_ref, i, '\n');
	move_to_past_backspaces_to_number(dict_ref, i);
	parser_inter->word_end = *i;
	return (is_invalid);
}
