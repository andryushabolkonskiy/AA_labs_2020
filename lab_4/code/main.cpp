
//  Created by Seryogina Daria
//  BMSTU, 2020

#include <iostream>
#include <thread>
#include "test.h"

void DoWork()
{
    for (size_t i = 0; i < 20; i++){
        std::cout << "ID thread = " << std::this_thread::get_id() << "\tDoWork\t" << i << std::endl;
    }
}


int main(int argc, const char * argv[]) {
    
    test_main();
    
    std::cout << "\n\nProgramm completed\n";
    
    return 0;
}
