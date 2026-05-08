#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

     int sum=0;

    int i=1; //loop variable
    while(i<=n){
        sum+=i;  // sum=sum+i     
        i++;
        /*
          sum=0+1 =1
          sum=1+2 =3
          sum=3+3 =6
          sum=6+4 =10
        */
    }

    cout<<sum<<endl;



    return 0;
}