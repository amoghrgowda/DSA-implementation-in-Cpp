#include <iostream>
int linearSearch(int array[],int size, int key){
    int index;
    for(int i=0; i<size; i++){
        if(array[i]==key){
            index = i;
            break;
        }
    }
    return index;
}










#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H
#include <iostream>
#include <vector>
int binarySearch(std::vector<int> &arr, int key)
{
    int l=0;
    int r=arr.size()-1;
    while(l<=r)
    {
        int mid = l + (r-l)/2;
        if(arr[mid]==key)
        return mid;
        else if (arr[mid]<key)
        l = mid+1;
        else
        r = mid-1;
    }
    return -1;
}
#endif