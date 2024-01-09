//Searching algorithms start here

#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H
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
#endif

/*------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------End of algo-------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------*/

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

// Sorting algorithms start here 

#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H
#include <iostream>
void bubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
#endif

/*------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------End of algo-------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------*/

#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H
int insertionSort(int arr[], int size)
{
    int key,j;
    for(int i=1;i<size;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            arr[j]=key;
            j--;
        }
        arr[j+1]=key;
    }
    return 0;
}
#endif

/*------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------End of algo-------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------*/

#ifndef QUICK_SORT_H
#define QUICK_SORT_H
#include <iostream>
#include <vector>
void swap1(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(std::vector<int>& arr,int low, int high){
    int i=low-1;
    int pivot=arr[high];
    for(int j=low;j<=high;j++){
        if(arr[j]<pivot){
            i++;
            swap1(arr[i],arr[j]);
        }  
    } 
    swap1(arr[i+1],arr[high]);
    return i+1;
}

void quickSort(std::vector<int>& arr,int low,int high){
    if(low<high){
        int pivot=partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

#endif

/*------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------End of algo-------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------*/

#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H
#include <iostream>

void swap(int &a, int &b){
int temp = a;
a = b;
b = temp;
}

void selectionSort(int arr[],int size)
{
    for(int i=0;i<size;i++){
        int min=i;
        for(int j=i+1;j<=size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

#endif

/*------------------------------------------------------------------------------------------------------------------------------------------------
--------------------------------------------------------------End of algo-------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------*/


// Leet code top 150 interview questions

#ifndef TWO_SUM_H
#define TWO_SUM_H
#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& arr, int target)
{
    size_t size = arr.size();
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            return {i,j};
        }
    }
    return {};
}

#endif


#ifndef MERGE_SORTED_H
#define MERGE_SORTED_H
#include <iostream>
#include <vector>
 void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        for(int i=0,j=0;i<(m+n);i++)
        {
            if(nums1[i]==0)
            {
                int k=i;
                if(nums1[k-1]>nums2[j])
                {
                    while(nums1[k-1]>nums2[j])
                    {
                        k--;
                    }
                    int temp=nums1[k];
                    nums1[k]=nums2[j];
                    nums1[i]=temp;
                    j++;
                }
                else
                {
                    nums1[i]=nums2[j];
                    j++;
                }
            }
        }

    }

#endif