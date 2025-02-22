
#include <iostream>
#include <vector>
#include <climits>
#include <stdexcept>
#include <algorithm>


class Span{
private:
	unsigned int N;
	std::vector<int> container;

public:
	Span();
	Span(unsigned int N);
	Span(const Span &obj);
	Span &operator = ( const Span &obj);
	~Span();
	void addNumber(int nb);
	
	int shortestSpan();
	int longestSpan();
};