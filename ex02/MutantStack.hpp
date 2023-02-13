/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:40:11 by fleduc            #+#    #+#             */
/*   Updated: 2023/02/13 10:46:15 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <iterator>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(const MutantStack& cp);
	~MutantStack();

	MutantStack<T>&   operator=(const MutantStack& rhs);

	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	iterator	begin();
	iterator	end();

	typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
	const_iterator	cbegin() const;
	const_iterator	cend() const;

	typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
	reverse_iterator	rbegin();
	reverse_iterator	rend();

	typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator	crbegin() const;
	const_reverse_iterator	crend() const;
};

template <typename T>
MutantStack<T>::MutantStack() : MutantStack<T>::stack() {
    
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& cp) : MutantStack<T>::stack(cp) {

}

template <typename T>
MutantStack<T>::~MutantStack() {
    
}

template <typename T>
MutantStack<T>&   MutantStack<T>::operator=(const MutantStack& rhs) {
    if (this != &rhs)
        MutantStack<T>::stack::operator=(rhs);
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::begin() {
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator   MutantStack<T>::end() {
    return (this->c.end());
}
    
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin() const {
    return (this->c.cbegin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend() const {
    return (this->c.cend());
}

template <typename T>
typename MutantStack<T>::reverse_iterator   MutantStack<T>::rbegin() {
    return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator   MutantStack<T>::rend() {
    return (this->c.rend());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin() const {
    return (this->c.crbegin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend() const {
    return (this->c.crend());
}

#endif
