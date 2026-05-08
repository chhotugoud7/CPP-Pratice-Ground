// given number prime hain ki nahi by function


    #include <iostream>
    using namespace std;

    bool isPrime( int n){
        for( int i = 2; i<n; i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
    }


    int main(){
        int n;
        cout<< "Enter a number n to find out it is prime or not "<< endl;
        cin>>n;

        if(isPrime(n)){
            cout<<"It is a Prime number "<< endl;
        }
        else{
            cout<<"It is not a Prime number"<<endl;
        }

        return 0;
    }