#include<iostream>
using namespace std;
int main(){


    // int n;
    // cin>>n;

    // for (int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=(n-i); j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     for(int j=(i-1); j>=1; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
       
    // }
    


   
   

   int n;
   cin>>n;
   
   for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }

        for(int j=1; j<=i; ++j){
            if(  
                // j<=i  
                j==1 || i==n
                ){
                cout<<i;
            }
            else{
                cout<<" ";
            }
            
        }

        for(int j=(i-1); j>=1; j++){
            if(
                // j>=1
                   j==(i-1) || i==n
                ){
                cout<<i;
            }
            else{
                cout<<" ";
            }
        }
         
    cout<<endl;
   }
    


    return 0;
}