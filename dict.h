/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:47:04 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/28 20:09:35 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H
# include "slice.h"
# define BUFFER_SIZE 2000

typedef struct s_parser_inter
{
	int	is_invalid;
	int	number_start;
	int	number_end;
	int	word_start;
	int	word_end;
}	t_parser_inter;

typedef struct s_dictionary
{
	char	*small_nums;
	char	*tens;
	char	*exponents;
}	t_dictionary;
int	read_dict(char *file, char *buffer);
int	parse_dict(char *dict_ref);
int	get_slice_from_line(char *dict_ref, int *i, t_slice *number, t_slice *word);
int	parse_dict_line(
		char *dict_ref,
		int *i,
		t_parser_inter *parser_inter
		);

#endif