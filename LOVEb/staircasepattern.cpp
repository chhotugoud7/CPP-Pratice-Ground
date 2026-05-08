#include<iostream>
using namespace std;


int main(){

 // taking input from user n 
    int n;
    cin>>n;


    for (int i = 0; i < n; i++)
    {
        
        // inner loop space
        for(int j=0; j< n-i-1; j++){
            cout<<" ";
        }
        
        // inner loop for numbers
        for(int j=1; j<=i+1; j++){
            cout<<j;
            
        }
        cout<<endl;
        

     
     
    }
    


    return 0;
}