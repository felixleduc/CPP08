/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:08:52 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/09 16:05:39 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>

template <typename T>
bool    easyfind(T &container, int toFind)
{
    typename T::iterator it = find(container.begin(), container.end(), toFind);
    if (it != container.end())
        return (true);
    return (false);
}

#endif
