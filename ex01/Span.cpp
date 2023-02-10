/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 09:19:56 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/10 11:36:57 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _size(0) {

}

Span::Span(unsigned int N) : _size(N) {

}

Span::Span(const Span& cp) {
    *this = cp;
}

Span::~Span() {

}

Span&   Span::operator=(const Span& rhs) {
    this->_size = rhs._size;
    this->_arr = rhs._arr;
    return (*this);
}

void    Span::addNumber(int n) {
    if (_arr.size() < _size)
        _arr.push_back(n);
    else
        throw Span::ArrayFullException();
}

void    Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    unsigned int size = std::distance(begin, end);
    if (size <= _size)
        _arr.insert(_arr.end(), begin, end);
    else
        throw Span::ArrayFullException();
}

int Span::shortestSpan(void) {
    if (_arr.size() < 2)
        throw Span::ArrayTooSmallException();
    std::vector<int>    cp = _arr;
    std::sort(cp.begin(), cp.end());
    std::vector<int>::iterator  it1 = cp.begin();
    std::vector<int>::iterator  it2 = ++cp.begin();
    int shortspan = *it2 - *it1;
    while (it2 != cp.end())
    {
        shortspan = ((*it2 - *it1) < shortspan)? *it2 - *it1: shortspan;
        it1 = it2; ++it2;
    }
    return (shortspan);
}

int Span::longestSpan(void) {
    if (_arr.size() < 2)
        throw Span::ArrayTooSmallException();
    std::vector<int>    cp = _arr;
    std::sort(cp.begin(), cp.end());
    return (cp.back() - cp.front());
}
