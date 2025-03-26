

#include "PmergeMe.hpp"

template<typename T>
T GetArray(int argc, char* argv[]) {
    T result;

    for (int i = 1; i < argc; i++) { 
        std::stringstream ss(argv[i]);
        std::string token;
        
        while (ss >> token) { 
            for (size_t j = 0; j < token.size(); j++) {
                if (!std::isdigit(token[j])) {
                    std::cerr << "Error\n";
                    exit(1);
                }
            }
            result.push_back(std::atoi(token.c_str()));
        }
    }

    return result;
}

double getTimeMicroseconds() {
    struct timeval time;
    gettimeofday(&time, NULL);
    return time.tv_sec * 1000000L + time.tv_usec; //convert to microseconds
}



int main(int argc, char *argv[]) {

	if (argc < 2) {
        std::cerr << "Wrong input!\n";
        return 1;
    }

	/// ---------------vector--------------------

    std::vector<int> arrVec = GetArray<std::vector<int>>(argc, argv);
	PmergeMe vec;
	std::cout << "Before: ";
	for(int i = 0; i< arrVec.size(); i++){
		std::cout << arrVec[i] << " ";
	}
	std::cout << "\n";

	std::cout << "After: ";
    double startVec = getTimeMicroseconds();
	vec.VectorMergeInsertionSort(arrVec,0,arrVec.size() -1);
    double endVec = getTimeMicroseconds();

	for(int i = 0; i< arrVec.size(); i++){
		std::cout << arrVec[i] << " ";
	}
	std::cout << "\n";
	std::cout << "Time to process a range of " << arrVec.size() << " elements with std::vector: " 
    << std::fixed << static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC << " us\n";



	/// ---------------Deque--------------------

	PmergeMe deq;
    std::deque<int> arrDeq = GetArray<std::deque<int>>(argc, argv);
	clock_t startDeq = clock();
	deq.DequeMergeInsertionSort(arrDeq,0,arrDeq.size() -1);
    clock_t endDeq = clock();

	std::cout << "Time to process a range of " << arrDeq.size() << " elements with std::deque: " 
    << std::fixed << static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC << " us\n";

    return 0;
}