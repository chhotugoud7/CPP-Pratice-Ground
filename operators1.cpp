#include<iostream>
using namespace std;

int main(){
 
    int num1=6;
    int num2=3;
 
    //arthmatic operations
    cout<<num1+num2<<endl; //9
    cout<<num1-num2<<endl; //3
    cout<<num1*num2<<endl; //18
    cout<<num1/num2<<endl; //2
    cout<<num1%num2<<endl; //0

    //relational operations
    cout<<(num1==num2)<<endl; //false 0
    cout<<(num1!=num2)<<endl; //true 1
    cout<<(num1>=num2)<<endl; //true 1
    
    //logical operators
    /* 
    && logical and - if both expression is true only then return is true
    || logical or  - if both expressions are false only then return is false 
    ! logical not - it reverse the output
    */
    bool exp1=true;
    bool exp2=false;

    cout<<(exp1&&exp2)<<endl; //false 0
    cout<<(exp1||exp2)<<endl; //true 1
    cout<<(!exp1)<<endl; //false 0
    cout<<(!exp2)<<endl; //true 1
    cout<<!(exp1&&exp2)<<endl; //true 1






    return 0;
}