#include<iostream>
using namespace std;
// to find simple Interest
int simpleInterest( int P, int R, int T){
    int simpleInt = (P*R*T)/100;
    return simpleInt;
}

int main(){

    int P,R,T;
    cout<<"Enter the value of P, R and t respectively"<<endl;
    cin >> P ;
    cin >> R ;
    cin >> T ;

    int ans = simpleInterest(P,R,T);
    cout<< ans << endl;
    return 0;
}