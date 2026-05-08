#include <iostream>
using namespace std;
int eng,maths,sci,tt,comp;
float average;
int  getmarks(){
   
    cout<<"Enter marks in english:";
     cin>>eng;
    cout<<"Enter marks in maths:";
     cin>>maths;
    cout<<"Enter marks in science:";
     cin>>sci;
    cout<<"Enter marks in  table tennis:";
     cin>>tt;
    cout<<"Enter marks in computer:";
     cin>>comp;}

void displaymarks(){
    cout<<"obtained marks in english:"<<eng<<endl;
    cout<<"obtained marks in maths  :"<<maths<<endl;
    cout<<"obtained marks in science :"<<sci<<endl;
    cout<<"obtained marks in table tennis:"<<tt<<endl;
    cout<<"obtained marks in computer:"<<comp<<endl;
}
    int tot_marks()  
 {int sum=eng+maths+sci+tt+comp;
    cout<<"Marks obtained by Aryan:"<<sum<<endl;
    return sum;
}
 
 float showaverage( float average){
    average= tot_marks();
    float avg= average/5;
    cout<<"The total average marks: "<<avg;
 }
int main(){
    cout<<"My first code for vastureta project::::\n"<<endl;
    cout<<"Enter number any number in 1-5 range:"<<endl;
    int num;
    cin>>num;
    
switch(num){
    case 1:
        cout<<"Enter marks:"<<endl;
        getmarks();
        break;
    case 2:
      cout<<"Enter and Dispaly:"<<endl;
       getmarks();
       displaymarks();
        break;
    case 3:
      cout<<"Enter and total marks:"<<endl;
      getmarks();
      displaymarks();
       break;
    case 4:
     cout<<"Show all function:"<<endl;
     getmarks();
     displaymarks();
     tot_marks();
     showaverage(average);
     break;
     default:
     cout<<" you Exit"<<endl;
     break;
    }
   
    cout<<"Here Ends the task 1 and 2";
    return 0;}
