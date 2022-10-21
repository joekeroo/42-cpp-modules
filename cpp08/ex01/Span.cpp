/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhii <jhii@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:13:16 by jhii              #+#    #+#             */
/*   Updated: 2022/10/21 19:48:47 by jhii             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int			dup(int x) { return (x); }
int			minus(int x, int y) { return (abs(y - x)); }
int			generate(int x) { (void)x; return (rand() % 100000); }
int			*Span::getArr(void) const { return (this->_arr); }
size_t		Span::getSize(void) const { return (this->_size); }
const char	*Span::OutOfBoundsException::what(void) const throw() { return (YELLOW "Error: index out of bounds" RESET); }
const char	*Span::SpanFullException::what(void) const throw() { return (YELLOW "addNumber(): Span is full" RESET); }
const char	*Span::SpanErrorException::what(void) const throw() { return (YELLOW "longestSpan() && shortestSpan(): span too small" RESET); }

Span::Span(Span const &ref) { *this = ref; }

Span::Span(size_t n): _curr(0), _size(n)
{
	std::cout << GREEN << "Span constructed" << RESET << std::endl;
	if (!n)
		this->_arr = NULL;
	else
	{
		this->_arr = new int[n];
		for (unsigned int i = 0; i < n; ++i)
			this->_arr[i] = 0;
	}
}

Span::~Span(void)
{
	std::cout << RED << "Span destructed" << RESET << std::endl;
	if (this->_size)
		delete(this->_arr);
}

Span	&Span::operator=(Span const &ref)
{
	this->_size = ref._size;
	this->_curr = ref._curr;
	if (!this->_size)
		this->_arr = NULL;
	else
	{
		this->_arr = new int[this->_size];
		for (size_t i = 0; i < this->_size; ++i)
			this->_arr[i] = ref._arr[i];
	}
	return (*this);
}

int	&Span::operator[](size_t i)
{
	if (i >= this->_size)
		throw (OutOfBoundsException());
	return (this->_arr[i]);
}

std::ostream	&operator<<(std::ostream &output, Span &ref)
{
	output << CYAN << "Array[" << ref.getSize() << "] : [" << RESET;
	for (size_t i = 0; i < ref.getSize() - 1; i++)
		output << CYAN << ref[i] << ", " << RESET;
	output << CYAN << ref[ref.getSize() - 1] << "]" << RESET;
	return (output);
}

int	*Span::sortArr(void)
{
	int	*arr = new int[this->_curr];
	std::transform(this->_arr, this->_arr + this->_curr, arr, dup);
	std::sort(arr, arr + this->_curr);
	return (arr);
}

void	Span::addNumber(int	num)
{
	if (this->_curr >= this->_size)
		throw (SpanFullException());
	this->_arr[this->_curr++] = num;
}

void	Span::fillSpanArr(void)
{
	std::transform(this->_arr, this->_arr + this->_size, this->_arr, generate);
	this->_curr = this->_size;
}

void	Span::longestSpan(void)
{
	if (this->_curr == 0 || this->_curr == 1)
		throw (SpanErrorException());

	int	*arr = this->sortArr();
	int	res = arr[this->_curr - 1] - arr[0];
	std::cout << CYAN << "longest Span  : " << res << RESET << std::endl;

	delete (arr);
}

void	Span::shortestSpan(void)
{
	if (this->_curr == 0 || this->_curr == 1)
		throw (SpanErrorException());

	int	*arr1 = this->sortArr();
	int	*arr2 = new int[this->_curr];
	int	*res1 = new int[this->_curr];

	std::transform(arr1, arr1 + this->_curr, arr2, dup);
	std::rotate(arr2, arr2 + 1, arr2 + this->_curr);
	std::transform(arr1, arr1 + this->_curr, arr2, res1, minus);

	int	*res2 = std::min_element(res1, res1 + this->_curr);
	std::cout << CYAN << "shortest Span  : " << *res2 << RESET << std::endl;

	delete[] arr1;
	delete[] arr2;
	delete[] res1;
}
