/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abredimu <abredimu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 06:55:17 by abredimu          #+#    #+#             */
/*   Updated: 2024/07/27 13:13:04 by abredimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipes.h"
#include "strings.h"

int	main(int argument_count, char **arguments)
{
	if (argument_count < 2 || argument_count > 3)
	{
		print("Error\n");
		return (1);
	}
	return (dictionary_pipe(argument_count, arguments));
}
