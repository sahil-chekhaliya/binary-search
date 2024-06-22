#include<iostream>

using namespace std;

int peakelement(int arr[],int size){
int s=0;
int e=size-1;
int mid=s+(e-s/2);
while(s<e)
{

if(arr[mid]>arr[mid+1]){
    e=mid;
}
else{
    s=mid+1;
}
mid=s+(e-s/2);
}
    return e;
}

int main(){

int arr[4]={0,1,0};
cout<<peakelement(arr,3);
    return 0;
}