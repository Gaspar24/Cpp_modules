
#include "RPN.hpp"


// there is no operation type priority just in order from left to right
//  34+2*1+

// 3->push on stack
// 4 -> push on stack
// i see the operator
// i pop the numbers back and execute the operation
// push the result back on stack


// example:
	// "8 9 * 9 - 9 - 9 - 4 - 1 +

	// push 8 and 9  on stack 
	// use operator => result 72
	// 72 and nex operand : 9  in the stack 
	// 72 -9 => 63;
	// 63-9 =>54/
	// 54 - 9 = 45
	// 45 -4 = 41
	// 41 + 1 = 42


//  "  2 4 - +"
// 1 2 * = 2
// 2/2 = 1
// 1 * 2 = 2
// 2 2 4 - +

// }

bool checkIfSymbol(char c){

	if(c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}



int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Wrong number of arguments\n";
        return 1;
    }

    std::string input_str = argv[1];
    std::stack<int> nums;
    std::stringstream ss(input_str);
    std::string token;

    while (ss >> token) { 
        if (token.length() == 1 && checkIfSymbol(token[0])) { 
            if (nums.size() < 2) {
                std::cerr << "Error!\n";
                return 1;
            }
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            int result;
            switch (token[0]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/': 
                    if (b == 0) {
                        std::cerr << "Error: Division by zero\n";
                        return 1;
                    }
                    result = a / b;
                    break;
            }
            nums.push(result);
        } 
        else {
			try {
				int num = std::stoi(token); //try to convert
				if (num > 9) {
					std::cerr << "Error: Numbers can t be bigger than 9\n";
					return 1;
				}
				nums.push(num); // push in stack if valid
			} catch (const std::invalid_argument& e) {
				std::cerr << "Error: Invalid number '" << token << "'\n";
				return 1;
			}catch (const std::out_of_range& e) {
				std::cerr << "Error: Number bigger than int max '" << token << "'\n";
				return 1;
			}
        }
    }
    if (nums.size() != 1) {
        std::cerr << "Error!\n";
        return 1;
    }
    std::cout << nums.top() << std::endl;
    return 0;
}