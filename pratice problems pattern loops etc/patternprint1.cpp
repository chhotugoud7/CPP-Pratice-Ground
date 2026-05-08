#include<iostream>
using namespace std;
int main(){


    int n,m;

    cin>>n>>m;
    //n row , m column
    
    for(int i=1; i<=n; i++){

        for(int j=1; j<=m; j++){
            cout<<"*";

        }

       cout<<endl;
    }

    return 0;
}
