#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    //i=no of row ,j now of column as equal to row

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }



    return 0;
}