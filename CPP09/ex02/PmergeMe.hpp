
#pragma once

#include <iostream>
#include <vector>
#include <array>
#include <deque>
// #include <ctime>
#include <cstdlib>
#include <sstream>
#include <sys/time.h>  





class PmergeMe{

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &obj);
		PmergeMe &operator = (const PmergeMe &obj);
		~PmergeMe();

		//vector
		void VectorMergeInsertionSort(std::vector<int>& arr, int left, int right);
		void VectorMerge(std::vector<int>& arr, int left, int mid, int right);
		void VectorBinaryInsertionSort(std::vector<int>& arr, int left, int right);

		//deque
		void DequeMergeInsertionSort(std::deque<int>& arr, int left, int right);
		void DequeMerge(std::deque<int>& arr, int left, int mid, int right);
		void DequeBinaryInsertionSort(std::deque<int>& arr, int left, int right);



};