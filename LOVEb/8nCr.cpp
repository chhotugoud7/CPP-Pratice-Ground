// to find out nCr

#include<iostream>
using namespace std;

// function to find out factorial of a number n
int factorial(int n){
    int fact = 1;

    for ( int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

// function to find out nCr

int nCr( int n, int r){

    int numerator = factorial(n);
    int denominator = factorial (r) * factorial ( n-r );

    return numerator / denominator;
}


int main (){

    int n , r;
    cout<<"Enter the values of n , r to find out nCr "<<endl;
    cin >> n >> r;

    cout<<"Answer ( nCr ) is "<< nCr(n, r)<<endl;
}