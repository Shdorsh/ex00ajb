/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slice.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 01:30:39 by shdorsh           #+#    #+#             */
/*   Updated: 2024/07/28 16:13:46 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLICE_H 
# define SLICE_H
# include <stdlib.h>
# include "strings.h"

typedef struct s_slice
{
	char	*string;
	int		start;
	int		end;
}	t_slice;

void	print_slice(t_slice input);
int		new_slice(t_slice *slice, char *string, int start, int end);
char	*copy_slice(t_slice input);

#endif