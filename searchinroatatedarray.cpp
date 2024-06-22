#include<iostream>

using namespace std;

int binarysearch(int arr[],int start,int end,int key){
    int s=start;
    int e=end;
    
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==key){
            return mid; 
        }
        else if(arr[mid]<key){
          s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int getpivot (int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}

int findPosition(int arr[], int n, int key)
{
    int pivot = getpivot(arr, n);
    if( key>= arr[pivot] && key<= arr[n-1])
    {
        return binarysearch(arr, pivot, n-1, key);
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, key);
    }
}
int main(){
    int arr[5]={7,9,1,2,3};
    int key=2;


cout<<findPosition(arr,5,key);
    return 0;
}