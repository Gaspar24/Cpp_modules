
#include "Span.hpp"

Span::Span(): N(0), container(0){}

Span::Span(const Span &obj): N(obj.N), container(obj.container){}

Span &Span::operator=(const Span &obj){
	if (this != &obj) {
        this->N = obj.N;
        container = obj.container;
    }
    return *this;
}

Span::~Span(){}

Span::Span(unsigned int N){
	this->N = N;
}

void Span::addNumber(int nb){
	if(nb > INT_MAX )
		throw std::runtime_error("Number bigger than Max int");
	else if( nb < INT_MIN)
		throw std::runtime_error("Number smaller than Min int");
	else if(this->container.size() == this->N)
		throw std::runtime_error("Limit reached");
	else
		container.push_back(nb);
}

int Span::shortestSpan(){
	
	if(container.size() <= 1)
		throw std::runtime_error("Not enough numbers to return a span\n");
	int shortest = INT_MAX;
	std::sort(container.begin(),container.end());
	for(int i = 0; i < container.size(); i++){
		if(i + 1 < container.size()){
			int temp = container[i+1] - container[i];
			if(temp < shortest)
				shortest = temp;
		}

	}
	return shortest;
}

int Span::longestSpan(){
	if(container.size() <= 1)
		throw std::runtime_error("Not enough numbers to return a span\n");
	std::sort(container.begin(),container.end());
	int i = 0;
	while(i < container.size())
		i++;
	int min = container[0];
	int max = container[i - 1];
	int longest = max - min;
	return longest;
}

// void Span::addNumbers( const std::vector<int>& numbers ) {
//     if (this->container.size() + numbers.size() > this->_N)
//         throw std::runtime_error("Maximum number of elements reached");
//     this->container.insert(container.end(), numbers.begin(), numbers.end());
// }