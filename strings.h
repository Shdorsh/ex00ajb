/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 10:45:39 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/28 16:13:37 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

int		is_string_number(char *string);
int		string_to_number(char *string);
int		count_num_chars(char *string);
char	*find_substring(char *string, char *substring);
void	print(char *string);

#endif
