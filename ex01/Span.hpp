/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:20:06 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/10 11:32:11 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
private:
    std::vector<int>    _arr;
    unsigned int        _size;
    Span(void);
public:
    Span(unsigned int N);
    Span(const Span& cp);
    ~Span();

    Span&   operator=(const Span& rhs);

    void    addNumber(int n);
    void    addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int     shortestSpan(void);
    int     longestSpan(void);

    class ArrayFullException : public std::exception
    {
    public:
        const char  *what() const throw() {
            return ("Array is already full");
        }
    };
    
    class ArrayTooSmallException : public std::exception
    {
    public:
        const char  *what() const throw() {
            return ("Array too small to search for span");
        }
    };
};

#endif
