#include <iostream>
using namespace std;


float maths;
float hindi;
float science;
float second_language;
float computer;
float total = 0;
float avg;


void Enter_marks(){

cout<<"ENTER THE MARK OF MATHS "<<endl;
cin>>maths;
cout<<"ENTER THE MARK OF HINDI "<<endl;
cin>>hindi;
cout<<"ENTER THE MARK OF SCIENCE "<<endl;
cin>>science;
cout<<"ENTER THE MARK OF SECOND_LANGUAGE "<<endl;
cin>>second_language;
cout<<"ENTER THE MARK OF COMPUTER "<<endl;
cin>>computer;
 
    
}

void Print_marks(){

    cout<<"the marks of maths is :  "<<maths<<endl;
    cout<<"the marks of hindi is :  "<<hindi<<endl;
   cout<<"the marks of science is : "<<science<<endl;
    cout<<"the marks of second_language is :  "<<second_language<<endl;
   cout<<"the marks of computer is :  "<<computer<<endl;

}

int Total_marks(){

   float Total = maths+hindi+science+second_language+computer;
    cout<<"Total marks: "<<Total <<endl;
    return Total;
}

int avgs(int a){
    avg = a/5;
    cout<<"average marks: "<<avg<<endl;
    
}

int main(){
cout<<"Enter number any number in 1-5 range:"<<endl;
    int num;
    cin>>num;  

switch(num){
    
     case 1:
         Enter_marks();
         break;
         
         case 2:
         Enter_marks();
         Print_marks();
         break;
         
         case 3 :
         Enter_marks();
         Print_marks();
         Total_marks();
         break;
         
         case 4 :
         Enter_marks();
         Print_marks();
         avg =  Total_marks();
         avgs(avg);
         break;
         
         
        default :
        cout<<"thanks you";
        break;
    
}
}