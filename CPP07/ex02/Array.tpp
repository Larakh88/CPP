/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:17:44 by lel-khou          #+#    #+#             */
/*   Updated: 2023/05/08 11:25:48 by lel-khou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T>
Array<T>::Array(void)
{
	this->_arr = new T[0];
	this->_size = 0;
}

template< typename T>
Array<T>::Array(unsigned int size)
{
	this->_arr = new T[size];
	this->_size = size;
}

template< typename T>
Array<T>::Array(const Array &copy)
{
	this->_arr = new T[0];
	*this = copy;
}

template< typename T>
Array<T>	&Array<T>::operator=(const Array &copy)
{
	if (_arr != NULL)
		delete [] _arr;
	if (this != &copy)
	{
		this->_size = copy.size();
		this->_arr = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_arr[i] = copy._arr[i];
	}
	return (*this);
}

template< typename T>
T	&Array<T>::operator[](int pos)
{
	if (pos < 0 || pos > this->_size - 1)
		throw(IndexOutOfBound());
	return (this->_arr[pos]);
}

template< typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

template< typename T>
Array<T>::~Array(void)
{
	delete [] this->_arr;
}

template < typename T>
const char	*Array<T>::IndexOutOfBound::what() const throw()
{
	return ("Index out of Bound.\n");
}

