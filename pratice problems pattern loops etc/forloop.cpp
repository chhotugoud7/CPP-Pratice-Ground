#include<iostream>
using namespace std;
int main(){



    int n;
    cin>>n;

    int sum=0;
    //for(init-statement; condition; final-expression)
    //    starting point   stopping point    loop variable update
    for(int i=1; i<=n; i++){

        sum+=i;
    }
    cout<<sum<<endl;


    return 0;
}