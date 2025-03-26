
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &obj){}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj){
	if(this != &obj){
		*this = obj;
	}
	return *this;
}

PmergeMe::~PmergeMe(){}


//----------------------------Vector--------------------------------



void  PmergeMe::VectorBinaryInsertionSort(std::vector<int>& arr, int left, int right){
	for (int i = left + 1; i <= right; i++) {
        int key = arr[i];
        int low = left, high = i - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > key)
                high = mid - 1;
            else
                low = mid + 1;
        }

        for (int j = i - 1; j >= low; j--)
            arr[j + 1] = arr[j];

        arr[low] = key;
    }
}


void  PmergeMe::VectorMerge(std::vector<int>& arr, int left, int mid, int right){
	int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j])
            arr[k++] = leftArr[i++];
        else
            arr[k++] = rightArr[j++];
    }

    while (i < n1)
        arr[k++] = leftArr[i++];
    while (j < n2)
        arr[k++] = rightArr[j++];
}


void PmergeMe::VectorMergeInsertionSort(std::vector<int>& arr, int left, int right){
    if(arr.size() <= 1)
        return;

    if (right - left + 1 <= 5) { 
        VectorBinaryInsertionSort(arr, left, right);
        return;
    }

    int mid = left + (right - left) / 2;

    VectorMergeInsertionSort(arr, left, mid);
    VectorMergeInsertionSort(arr, mid + 1, right);
    VectorMerge(arr, left, mid, right);
}


//----------------------------Deque--------------------------------
void PmergeMe::DequeBinaryInsertionSort(std::deque<int>& arr, int left, int right){
    // for aeach element we find the it s correct position with the binary search
    
    for(int i = left + 1; i <= right; i++){
        int key = arr[i]; // current element to insert
        int low = left;
        int high = i -1;

        while(low <= high){
            int mid = low + (high - low) /2;
            if(arr[mid] > key)
                high = mid -1;
            else
                low = mid+1;
        }
        //shift elem to right
        for(int j = i -1; j>= low; j--){
            arr[j + 1] = arr[j];
        }
        arr[low] = key;
    }
   
}

void PmergeMe::DequeMerge(std::deque<int>& arr, int left, int mid, int right){
    //copy the elements in left and right subaarrays
    std::deque<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    std::deque<int> rightArr(arr.begin() + mid +1,arr.begin() + right + 1);
    int i = 0;
    int j = 0;
    int k = left;

    // merge back in to array
    while(i < leftArr.size() && j < rightArr.size()){
        if(leftArr[i] <= rightArr[j]){
            arr[k++] = leftArr[i++];
        }
        else
            arr[k++] = rightArr[j++];
    }

    //copy the remaining elements
    while (i < leftArr.size())
        arr[k++] = leftArr[i++];

    while (j < rightArr.size())
        arr[k++] = rightArr[j++];
}


void PmergeMe::DequeMergeInsertionSort(std::deque<int>& arr, int left, int right){
    //right = point to end
    //left = point to start
    if(arr.size() <= 1)
        return;

    if (right - left + 1 <= 5){
        DequeBinaryInsertionSort(arr,left,right);
        return ;
    }

    int mid = left + (right - left) / 2;
    DequeMergeInsertionSort(arr,left,mid);
    DequeMergeInsertionSort(arr,mid+1,right);

    DequeMerge(arr,left,mid,right);

}
