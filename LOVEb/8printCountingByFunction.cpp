// Print counting by finction

#include <iostream >
using namespace std;

// function to counting
void printCounting( int n ){

    for ( int i = 1; i <= n ; i++){

        cout<< i << " ";

    }
    cout<<endl;
}

int main(){

    int n;
    cout<<"Enter a number n to find out Counting to n "<<endl;
    cin>>n;

    printCounting(n);

    return 0;
}