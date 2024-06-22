#include<iostream>

using namespace std;
long long int sqrt(int n){

    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;

    long long int ans=-1;

    while(s<=e){
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
          ans=mid; 
          s=mid+1;
        }
        else{
            e=mid-1;
        }
       mid=s+(e-s)/2; 
    }
    return ans;
}
double SquareRoot(int n,int decimal,int temp){

    double factor = 1;
    double ans = temp;

    for(int i=0; i<decimal; i++) {
        factor = factor/10;

        for(double j=ans; j*j<n; j+= factor ){
            ans = j;
        }
    }
    return ans;

}

int main(){

int number;

cout<<"enter the number: ";
cin>>number;

int temp=sqrt(number);

cout<<SquareRoot(number,3,temp);
    }