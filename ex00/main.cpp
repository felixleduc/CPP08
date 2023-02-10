/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:08:54 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 16:07:39 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    std::vector<int>    vArr;
    std::list<int>      lArr;

    for (size_t i = 0; i < 10; i++)
    {
        vArr.push_back(i);
        lArr.push_back(i);
    }
    std::cout << "Can find test:" << std::endl;
    std::cout << easyfind(vArr, 1) << std::endl;
    std::cout << easyfind(lArr, 5) << std::endl;
    std::cout << std::endl << "Can't find tests:" << std::endl;
    std::cout << easyfind(vArr, 10) << std::endl;
    std::cout << easyfind(lArr, -1) << std::endl;
    return 0;
}
