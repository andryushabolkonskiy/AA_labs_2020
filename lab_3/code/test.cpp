
#include "test.h"

unsigned long long tick(void)
{
    unsigned long long d;
    __asm__ __volatile__("rdtsc" : "=A" (d));
    return d;
}

void test(unsigned start, unsigned end, unsigned step) {
    
    int *a;
    int n;
    unsigned long int tb, te;
    srand(time(nullptr));
    
    for (unsigned i = start; i <= end; i += step) {
        
        n = i;
        
        
        
        a = get_random_array(n, -50, 1000);
        
        tb = tick();
        //array_print(a, n);
        choices_sort(a, n);
        //array_print(a, n);
        te = tick();
        //std::cout << "for R n = " << n << " " << "time = " << (te - tb) << "\n";
        
        tb = tick();
        choices_sort(a, n);
        te = tick();
        //std::cout << "for G n = " << n << " " << "time = " << (te - tb) << "\n";
        
        array_sort_low(a, n);
        
        tb = tick();
        choices_sort(a, n);
        te = tick();
        std::cout << "for L n = " << n << " " << "time = " << (te - tb) << "\n\n";

        delete a;
        //array_sort_grow(a, n);
    }
}


void main_test() {
    test(1000, 10000, 1000);
}
