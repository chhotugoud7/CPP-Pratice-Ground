#include<iostream>
using namespace std;
int main() {

    int n1, n2, n3;
    cout<<"Enter three numbers: "<<endl;
    cin>>n1>>n2>>n3;
    
    // if(n1>n2 && n1>n2){
    //     cout<<"Max is: "<<n1<<endl;
    // }
    // else if(n2>n1 && n2>n3){
    //     cout<<"Max is: "<<n2<<endl;
    // }
    // else{
    //     cout<<"Mas is: "<<n3<<endl;
    // }
        //n1= 5,n2=6 , n3=7
    if (n1>n2){
        if (n1>n3){

            cout<<"Max is: "<<n1<<endl;
        }
         else{
                cout<<"Max is : "<<n3<<endl;
            }
    }
    else  {
        if (n2>n3) {
            cout<<"Max is: "<<n2<<endl;

        } 
        else{
            cout<<"Max is: "<<n3<<endl;
        }

    }
 
    return 0;
}