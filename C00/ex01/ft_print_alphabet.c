/* ************************************************************************** */
/*
                */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rado andria   <adresse@ecole.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:53:30 by rado andria       #+#    #+#             */
/*   Updated: 2023/11/24 16:53:30 by rado andria      ###   ########.fr       */
/*
                */
/* ************************************************************************** */
#include "ft_print_alphabet.h"
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
