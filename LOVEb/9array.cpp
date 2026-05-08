// how an array with any number 

#include<iostream>
using namespace std;

int main (){

    int a[10] = {0};
    int b[10] = {5};
    // iss tareeke se aap kisi bhee array ko kisi bhee value se initialize kar sakte hain
    
    int c[10];
    for( int i = 0; i < 10 ; i++){
            c[i] = 5;
    };

    cout<<"\n";
    cout<<"Elements of array a: "<<endl;
    for( int i = 0; i<10; i++){
        cout<<a[i]<<" ";
    }

    cout<<"\n";
    cout<<"Elements of array b: "<<endl;
    for( int i = 0; i<10; i++){
        cout<<b[i]<<" ";
    }

    cout<<"\n";
    cout<<"Elements of array c: "<<endl;
    for( int i = 0; i<10; i++){
        cout<<c[i]<<" ";
    }

    return 0;
}