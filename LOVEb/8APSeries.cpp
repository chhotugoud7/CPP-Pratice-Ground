// find out AP = (3*n+7)

#include<iostream>
using namespace std;

int valueOfAP( int n){
    int value;
    value = ((3*n)+7);
    return value;
}


int main(){

    int n;
    cout<<"Enter a value of n to find out the value of an AP = ((3*n)+7) "<<endl;
    cin>>n;

    cout<<"The value of ap is " << valueOfAP( n )<< endl;
}