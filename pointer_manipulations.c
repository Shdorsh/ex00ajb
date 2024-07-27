/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_manipulations.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abredimu <abredimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 14:50:56 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/27 15:38:45 by abredimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chars.h"

int	move_past_numbers(char *dict, int *i)
{
	int	found_char;

	found_char = 0;
	while (char_is_number(dict[*i]))
	{
		*i++;
		found_char = 1;
	}
	return (found_char);
}

int	move_past_single_character(char *dict, int *i, char character)
{
	if (dict[*i] == character)
	{
		*i++;
		return (1);
	}
	else
	{
		return (0);
	}
}

int	move_past_characters(char *dict, int *i, char character)
{
	int	found_char;

	found_char = 0;
	while (dict[*i] == character)
	{
		*i++;
		found_char = 1;
	}
	return (found_char);
}

int	move_to_character(char *dict, int *i, char character)
{
	int	found_char;

	found_char = 0;
	while (dict[*i] != character)
	{
		*i++;
		found_char = 1;
	}
	return (found_char);
}