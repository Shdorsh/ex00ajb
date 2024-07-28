/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:03:24 by shdorsh           #+#    #+#             */
/*   Updated: 2024/07/28 16:56:20 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"

t_input	new_input(char *number_string, char *dict)
{
	t_input	input;

	input.number = number_string;
	input.dict = dict;
	return (input);
}
