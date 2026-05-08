// fibonacci series by fincton

#include<iostream>
using namespace std;

void fibonacci( int n ){
    int a =0 , b =1;
    // edge case 
    if(n==1){
        cout<<a<<" ";
        return ;
    }
    cout<<a<<" "<<b<<" ";
     
    for ( int i = 3; i<=n; i++){
        
           int c = a + b;
           cout << c << " ";
           a = b; 
           b = c; 
    }
    return ;
}


int main (){

    int n;
    cout<< "Enter the value of n to make a fibonacci series to nth value "<<endl;
    cin>>n;

    fibonacci( n );
    return 0;
}