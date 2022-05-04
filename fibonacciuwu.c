/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:59:58 by marvin            #+#    #+#             */
/*   Updated: 2022/05/02 18:59:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	f(size_t);
int	main()
{
    printf("%lu\n",f(83));
}

size_t	f(size_t n)
{
	static size_t prev;
	size_t retval;
	size_t aux;

	if(n == 1)
	{
		prev = 0;
		return(1);
	}
	aux = f(n - 1);
	retval = aux + prev;
	prev = aux;
	return(retval);
}
