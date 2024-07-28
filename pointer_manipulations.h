/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_manipulations.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 15:12:50 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/28 19:49:30 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINTER_MANIPULATIONS_H
# define POINTER_MANIPULATIONS_H

int	move_past_numbers(char *string_pointer, int *i);
int	move_past_single_character(char *dict, int *i, char character);
int	move_past_characters(char *string_pointer, int *i, char character);
int	move_to_character(char *string_pointer, int *i, char character);
int	move_to_past_backspaces_to_number(char *dict, int *i);

#endif