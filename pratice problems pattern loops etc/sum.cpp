#include<iostream>
using namespace std;

int main(){
    
    int a,b;
    cout<<"a: "<<endl;
    cin>>a;
    cout<<"b: "<<endl;
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;   

    return 0;
}