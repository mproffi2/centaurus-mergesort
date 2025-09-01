#include <iostream>   
#include <vector>     
#include <cstdlib>    
#include <ctime>      
#include <chrono>

// merges two sorted halves of the array
void merge(std::vector<int>& numbers, int start, int middle, int end) {
    int leftSize = middle - start + 1;
    int rightSize = end - middle;

    std::vector<int> leftHalf(leftSize);
    std::vector<int> rightHalf(rightSize);

    // copy left half
    for (int leftIndex = 0; leftIndex < leftSize; leftIndex++)
        leftHalf[leftIndex] = numbers[start + leftIndex];

    // copy right half
    for (int rightIndex = 0; rightIndex < rightSize; rightIndex++)
        rightHalf[rightIndex] = numbers[middle + 1 + rightIndex];

    int leftIndex = 0;
    int rightIndex = 0;
    int mainIndex = start;

    // merge them back
    while (leftIndex < leftSize && rightIndex < rightSize) {
        if (leftHalf[leftIndex] <= rightHalf[rightIndex])
            numbers[mainIndex++] = leftHalf[leftIndex++];
        else
            numbers[mainIndex++] = rightHalf[rightIndex++];
    }

    // copy leftovers from left half
    while (leftIndex < leftSize)
        numbers[mainIndex++] = leftHalf[leftIndex++];

    // copy leftovers from right half
    while (rightIndex < rightSize)
        numbers[mainIndex++] = rightHalf[rightIndex++];
}

// recursive merge sort function
void mergeSort(std::vector<int>& numbers, int start, int end) {
    if (start < end) {
        int middle = start + (end - start) / 2; 
        mergeSort(numbers, start, middle);      
        mergeSort(numbers, middle + 1, end);    
        merge(numbers, start, middle, end);     
    }
}

int main(int argc, char* argv[]) {
    std::srand(std::time(0));  // for random numbers

    int arraySize = 10;
    if (argc > 1) arraySize = std::atoi(argv[1]);

    std::vector<int> numbers;

    // generate random numbers 0-99
    for (int i = 0; i < arraySize; i++)
        numbers.push_back(rand() % 100);

    // timing
    auto startTime = std::chrono::high_resolution_clock::now();
    mergeSort(numbers, 0, arraySize - 1);
    auto endTime = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime).count();

    return 0;
}