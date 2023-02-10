/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:19:33 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/10 11:39:18 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);

		sp.addNumber(34);
		sp.addNumber(343);
		sp.addNumber(24567);
		sp.addNumber(4526);
		sp.addNumber(40);

		std::cout << "basic manually added value:" << std::endl;
		std::cout << "shortest span = " << sp.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp.longestSpan() << std::endl;
	}
	std::cout << std::endl;
	{
		std::vector<int>    array;
		for (size_t i = 0; i < 10000; i++)
			array.push_back(i + 1);
		Span	sp2(10000);
		sp2.addNumber(array.begin(), array.end());
		std::cout << "values added with range iterator:" << std::endl;
		std::cout << "shortest span = " << sp2.shortestSpan() << std::endl;
		std::cout << "longest span = " << sp2.longestSpan() << std::endl;
	}
	return 0;
}

