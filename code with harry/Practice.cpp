 //********Lecture 3*******
 /*
 #include<iostream>
 using namespace std;
 
int main(){
    int value=5;
    cout<<"pahla program "<<value<<endl;
    return 0;
}
*/

//********Lecture 4*******
/*
#include<iostream>
using namespace std;

int main(){
    int a=4, b=5;
    float pi= 3.14;
    cout<<"The value of a: "<<a<<"\nThe value of b is: "<<b<<endl;
    cout<<"The value of pi: "<<pi;

   return 0;
}
*/

// *************Lecture 6**********
// Operators  
/*
#include<iostream>
using namespace std;

int main (){
    //Arthimatic Operators
    int a=4, b=5;
    cout<<"The value of a + b: "<<a + b<<endl;
    cout<<"The value of a - b: "<<a - b<<endl;
    cout<<"The value of a * b: "<<a * b<<endl;
    cout<<"The value of a / b: "<<a / b<<endl;
    cout<<"The value of a % b: "<<a % b<<endl;
    cout<<"The value of a++: "<<a++<<endl;
    cout<<"The value of a--: "<<a--<<endl;
    cout<<"The value of ++a: "<<++a<<endl;
    cout<<"The value of --a: "<<--a<<endl;
    cout<<endl;

    //Relational Operators  or  Comparison Operators
    cout<<"The value of a==b : "<< (a==b) <<endl;
    cout<<"The value of a!=b : "<< (a!=b) <<endl;
    cout<<"The value of a<b : "<< (a<b) <<endl;
    cout<<"The value of a>b : "<< (a>=b) <<endl;
    cout<<"The value of a<=b : "<< (a<=b) <<endl;
    cout<<"The value of a>=b : "<< (a>=b) <<endl;
    cout<<endl;

    //Logical Operators
    cout<< "The Value of ((a==b) && (a<b)) : "<<((a==b) && (a<b)) <<endl;
    cout<< "The Value of ((a==b) || (a<b)) : "<<((a==b) || (a<b)) <<endl;
    cout<< "The Value of (!(a==b)) : "<<(!(a==b)) <<endl;
    return 0;
}
*/

//**********Lecture 7*********
//global and local variables
/*
#include<iostream>
using namespace std;

//global variable
int a = 25;

int main(){
    //Local variable
    int a = 5;
    cout<<"The Value of Local variable is "<<a<<endl;
    cout<<"The value of Global Variable is "<<::a<<endl;
    cout<<"The size of int a or 5 is " <<sizeof(5)<<endl;
    cout<<endl;
    
    //********************Float, double and Long double Literals***********
    float b=34.5F;
    long double c=34.5L;
    // Bydefault system values ko double considers krta hain
    cout<<"The size of 34.5 is "<<sizeof(34.5)<<endl;
    cout<<"The size of 34.5 is "<<sizeof(34.5f)<<endl;
    cout<<"The size of 34.5 is "<<sizeof(34.5F)<<endl;
    cout<<"The size of 34.5 is "<<sizeof(34.5l)<<endl;
    cout<<"The size of 34.5 is "<<sizeof(34.5L)<<endl;
    cout<<endl;

    //**********Reference Variables************
    // isme basically ek variable ko ek se jyada naam diye jaate hain
    float x=5;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<endl;

    //***********TypeCasting*******
    // isme ek data type value of dusre data type value me convert kiya jata hain 
    int d = 45;
    float e = 45.46;
    cout<<"The value of d is "<<(float)d<<endl;
    cout<<"The value of d is "<<float(d)<<endl;

    cout<<"The value of e is "<<(int)e<<endl;
    cout<<"The value of e is "<<int(e)<<endl;
    int f = int(e);
    cout<<"the value of f is "<<f<<endl;

    return 0;

}
*/


//************* Lecture 8 ************

/*
//**************Constant*************
// isme basically hum apne variable ko read only bana dete hain. yesa krne ke baad hum uss
// variable ko aage code me change nhi kar skate.
#include<iostream>
using namespace std;

int main(){
    const float pi = 3.14; // Now the value of pi can't be changed in further code if you do it will notify you
    cout<<"The Value of Pi is "<< pi <<endl;

    return 0;
}
*/
/*
//**********Manipulators***********
// WE use setw(n) isme basically cheeje right sift ho jati hain aur yah n ki width leta hain aur yah iomanip header file se aata hain.
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=4, b=77, c=1093;
    cout<<"The value of a without setw() is "<<a<<endl;
    cout<<"The value of b without setw() is "<<b<<endl;
    cout<<"The value of c without setw() is "<<c<<endl;
    //with setw() function
    cout<<"The value of a with setw() is "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw() is "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw() is "<<setw(4)<<c<<endl;
    return 0;
}
*/

//***********Operator Precedence**********
//isme precedence and associativity table ke anusar liya jata hain