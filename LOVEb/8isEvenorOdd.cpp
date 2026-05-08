// to find out a number is even or odd

#include <iostream>
using namespace std;

bool isEven( int a ){

        // To find out odd we can take the and of number with 1 
        if( a & 1 ){
            return 0;
        }
        // return 1 if it is odd
        return 1;
}

int main(){

    int num1;
    cin>>num1;
     
     // isEven(num1) become 1 if it is even 
    // then if block execute 
    if( isEven(num1) ){
        cout<<"number is even "<<endl;
    }
    else{
        cout<<"Number is odd "<<endl;
    }
    return 0;
}