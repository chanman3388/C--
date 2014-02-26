//
//  while_test_1.cpp
//  
//
//  Created by Christopher Wing Tai Chan on 20/10/2013.
//
//

#include <iostream>

int main()
{
    int num = 10;
    while (num >= 0){
        std::cout << "Count: " << num << std::endl;
        --num;
    }
    return 0;
}