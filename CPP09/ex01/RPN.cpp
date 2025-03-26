
#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &obj) {}

RPN &RPN::operator=(const RPN &obj) {
    if (this != &obj) {
        std::cout << "RPN object assigned" << std::endl;
    }
    return *this;
}

RPN::~RPN() {}