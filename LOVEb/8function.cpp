// power of (a, b)

#include <iostream>
using namespace std;

int power ( int a, int b){

    int ans = 1;
    
    for ( int i = 1; i <= b; i++){
        // power ke liye
        ans = ans * a;
        cout << "Answer in iteration "<< i << " is " << ans << endl;
    }
    cout<< " return se phle ka ans "<< ans <<endl;
    return ans;
}

int main(){

    int a, b;
    cout<<"Enter the values of a and b to find out power"<< endl;
    cin>>a>>b;

    int ans = power(a, b);
    cout << "Answer of a to the power b " << ans << endl;

    int c, d;
    cout<<"Enter the values of c and d to find out power"<< endl;
    cin>> c >> d;

    // yha par ans ko redeclaration nahi krna hain
    ans = power(c, d);
    
    cout << "Answer of c to the power d " << ans << endl;

    return 0;
}