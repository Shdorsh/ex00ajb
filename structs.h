/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 16:04:43 by shdorsh           #+#    #+#             */
/*   Updated: 2024/07/28 16:48:08 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_input
{
	char	*number;
	int		number_length;
	char	*dict;
}	t_input;

t_input	new_input(char *number_string, char *dict);

#endif