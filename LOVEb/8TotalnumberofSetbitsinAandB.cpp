// for find out of total number of setbits in a and b

#include<iostream>
using namespace std;

int setBits( int n ){
    int count = 0;
    while ( n != 0 ){
        
        if ( n & 1 ){
            count++;
        }
        // for right shift n 
        n = n >> 1 ;
    }
    return count;
}


int main() {
    int a, b;
    cout<<"Enter the values of a and b "<< endl;
    cin>>a>>b;

    cout<<"The total number of set bits in a and b is "<< setBits(a) + setBits(b)<< endl;
}