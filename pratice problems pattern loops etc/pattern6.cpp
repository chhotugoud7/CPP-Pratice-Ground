#include<iostream>
using namespace std;
int main(){

    
    // int n;
    // cin>>n;

    // for(int i=1; i<=n; i++){


    //     for(int j=i; j<=n; j++){
    //         cout<<j;

    //     }
    //     for(int j=1; j<=(i-1); j++){
    //         cout<<j;

    //     }
    //     cout<<endl;
        
    // }

    // int n,m;
    // cin>>n>>m;

     

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         if(i==1 || i==n || j==1 ||j==m){
    //             cout<<j;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }


    //     cout<<endl;
    // }
    


    // int n,m;
    // cin>>n>>m;

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=m; j++){
    //         if((i+j)%2==0 ){
    //             cout<<1;
    //         }
    //         else{
    //             cout<<2;
    //         }
    //     }
    //     cout<<endl;
    // }           

 

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            
                cout<<j;
            
           
        }

        cout<<endl;
    }

    


    return 0;
}