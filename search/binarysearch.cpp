#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int start,int end,int key)
{
    while (start<=end)
    {
            int mid=start+(end-start)/2;
        if(arr[mid]==key)
             return mid; 
        else if(arr[mid]>key)
            end=mid-1;
        else 
             start=mid+1;
        
    }
    return -1;
}
int main(){
    int arr[5]={1,3,5,7,13};
    cout<<binarySearch(arr,0,4,8)<<" ";
    return 0;
}