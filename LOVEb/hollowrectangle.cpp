#include<iostream>
using namespace std;


int main(){


    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        if(i==0 || i==n-1){

           
             for (int j = 0; j < 10; j++)
             {
                cout<<"*"<<" ";
             }
             cout<<endl;
        }
        else{

            
            for (int j = 0; j < 10; j++)
             {
                if(j==0 || j==9){
                cout<<"*"<<" ";
             }
             else{
                cout<<" "<<" ";
             }
               
             }
             cout<<endl;
            
        }
     
    }
    


    return 0;
}