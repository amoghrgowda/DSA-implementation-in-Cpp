#include "dsa.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> a={2,7,10,11,3};
    std::vector<int>x = twoSum(a,9);
    std::cout<<"i = "<<x[0]<<" j= "<<x[1];
}