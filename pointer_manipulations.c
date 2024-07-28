/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_manipulations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:50:56 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/28 20:01:30 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chars.h"
#include <stdio.h>

int	move_past_numbers(char *dict, int *i)
{
	int	no_char;

	no_char = 1;
	while (char_is_number(dict[*i]))
	{
		(*i)++;
		no_char = 0;
	}
	return (no_char);
}

int	move_past_single_character(char *dict, int *i, char character)
{
	if (dict[*i] == character)
	{
		(*i)++;
		return (0);
	}
	else
	{
		return (1);
	}
}

int	move_past_characters(char *dict, int *i, char character)
{
	int	no_char;

	no_char = 1;
	while (dict[*i] == character)
	{
		(*i)++;
		no_char = 0;
	}
	return (no_char);
}

int	move_to_character(char *dict, int *i, char character)
{
	int	no_char;

	no_char = 1;
	while (dict[*i] != character)
	{
		(*i)++;
		no_char = 0;
	}
	return (no_char);
}

int	move_to_past_backspaces_to_number(char *dict, int *i)
{
	while (dict[*i] && dict[*i] == '\n')
	{
		(*i)++;
	}
	return (!char_is_number(dict[*i]));
}
