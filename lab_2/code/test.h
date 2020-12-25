#ifndef test_h
#define test_h

#include "matrix.h"

#include <ctime>
#include <fstream>
#include <cstdlib>

unsigned long long tick(void);
void test(std::ofstream &file, unsigned start, unsigned end, unsigned step);
void main_for_test();

#endif /* test_h */
