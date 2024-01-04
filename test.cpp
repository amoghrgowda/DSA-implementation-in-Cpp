#include "dsa.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> b;
    int c;
    cout<<"Enter the size of the array\n";
    cin>>c;
    cout<<"Enter the values of the array\n";
    for(int i=0;i<c;i++)
    {
        int value;
        cin >> value;
        b.push_back(value);
    }
     for(int i=b.size()-1;i>=0;i--)
    {   cout<<"current size:"<<b.size()<<endl;
        b.pop_back();
        cout<<b[i]<<"\n";
    }
    /*int ind = linearSearch(a, 10, 4);
    cout << "\n" << ind+1 << "\n\n";
    cout<<binarySearch(b,5)<<endl;*/
    return 0;
}
