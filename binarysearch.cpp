#include<iostream>

using namespace std;

int binarysearch(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=start+(end-start/2);

    while(start<=end){
    
    if(arr[mid]==key)
    {
        return mid;
    }
    if (arr[mid]<key)
    {
        start=mid+1;
    }
    if(arr[mid]>key)
    {
         end=mid-1;
    }
 mid=start+(end-start/2);
  
    }

    return -1;
}

int main(){

int odd[6]={2,4,6,8,12,18};
int even[5]={3,8,11,14,16};

int oddIndex=binarysearch(odd,6,12);

cout<<"index of key value is :"<<oddIndex<<endl;

int evenIndex=binarysearch(even,5,16);

cout<<"index of key value is :"<<evenIndex<<endl;

    return 0;
}