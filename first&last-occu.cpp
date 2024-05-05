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

int main(){

int even[5]={1,2,3,3,5};

cout<<"first occuerence index of key is "<<firstoccu(even,5,3)<<endl;

cout<<"last occuerence index of key is "<<lastoccu(even,5,3)<<endl;

    return 0;
}