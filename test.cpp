#include "dsa.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a={6,2,10,3,1};
    quickSort(a,0,4);
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    return 0;
}
