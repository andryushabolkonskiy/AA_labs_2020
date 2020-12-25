
#ifndef matrixObject_h
#define matrixObject_h

#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <thread>
#include <chrono>
#include <mutex>
#include <queue>
#include <fstream>

struct matrix_type{
    int **matrix;
    unsigned n;
    unsigned m;
};

class matrixObject {
    
public:
    size_t number;
    
    int **firstMatrix;
    int **secondMatrix;
    int **resultMatrix;
    int sizeMatrix;
    
    matrixObject(unsigned size, int min, int max, int indexObj);
    int get_rand_number(int a, int b);
    int **get_matrix(unsigned size, int min, int max);
    void addUpMatrix(int start, int end);
    void print_matrix(int **a);
};

#endif /* matrixObject_h */
