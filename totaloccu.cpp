#include<iostream>

using namespace std;

int firstoccu(int arr[],int size,int key){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid])
        {
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
    
}
int lastoccu(int arr[],int size,int key){

    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int totaloccu (int first,int last)
{

    return (last-first)+1;
}

int main(){

int even[5]={1,2,3,3,5};

cout<<"total number of ocuurence is "<< totaloccu(firstoccu(even,5,3),lastoccu(even,5,3));

    return 0;
}