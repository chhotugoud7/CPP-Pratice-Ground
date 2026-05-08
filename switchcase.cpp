#include<iostream>
using namespace std;
int main(){

   
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;

    switch (alphabet){
        case 'a':
           cout<<"It is vowel"<<endl;
           break;
        case 'e':
           cout<<"It is vowel"<<endl;
           break;
        case 'i':
           cout<<"It is vowel"<<endl;
           break;
        case 'o':
           cout<<"It is vowel"<<endl;
           break;
        case 'u':
           cout<<"It is vowel"<<endl;
           break;
        default :
           cout<<"it is an consonent"<<endl;
           break;   


    }


    return 0;

}