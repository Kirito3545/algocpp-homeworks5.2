#include <iostream>
#include "print.h"
#include "journeyThroughThePyramid.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    std::srand(std::time(nullptr)); 

    int arrSize = 5 + rand() % 21;

    


    
    int* arr = new int[arrSize] {};

    for (int i = 0; i < arrSize; i++)
    {
        arr[i] = rand() % 55;
    };

    PrintArray(arr, arrSize);

    int countLevelsOfPyramid = log2(arrSize) + 1;
    int* levelOfpyramid = new int[countLevelsOfPyramid];

    PrintPyramid(arr, arrSize, levelOfpyramid, countLevelsOfPyramid);

    journeyThroughThePyramid(arr, arrSize, levelOfpyramid, countLevelsOfPyramid);


    delete[] levelOfpyramid; 
    levelOfpyramid = nullptr;

    delete[] arr;
    arr = nullptr;
}