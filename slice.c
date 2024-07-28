/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slice.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shdorsh <shdorsh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 01:38:20 by shdorsh           #+#    #+#             */
/*   Updated: 2024/07/28 18:47:19 by shdorsh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"
#include "slice.h"
#include <unistd.h>
#include <stdio.h>

int	new_slice(t_slice *result, char *string, int start, int end)
{
	if (!string[end] || start > end)
	{
		return (1);
	}
	result->string = string;
	result->start = start;
	result->end = end;
	return (0);
}

void	print_slice(t_slice input)
{
	char	*print_start;

	print_start = input.string + input.start;
	write(STDOUT_FILENO, print_start, input.end - input.start);
	write(STDOUT_FILENO, "\n", 1);
}

char	*copy_slice(t_slice input)
{
	char	*result;
	int		i;

	result = (char *)malloc(sizeof (char) * (1 + input.end - input.start));
	if (!result)
	{
		print("Warning - could not allocate resources for slice");
		return (0);
	}
	i = input.start;
	while (i < input.end - input.start)
	{
		result[i] = input.string[input.start + i];
		i++;
	}
	result[i] = 0;
	return (result);
}
