#include<iostream>
using namespace std;

int main(){
    int N; cin>>N;
  //  Write Your Code here
           int i=1;
        while(i<=N){
            
            int j =1;
            int num = i;
            while(num){
                cout<< j;
                j = j+1;
                num = num -1;
            }
            
            int num1 = i-1;
            int j1 = i-1;
            while(num1){
                cout<<j1;
                j1 = j1-1;
                
                num1 =num1-1;
            }
            
            cout<<" ";
            i = i+1;
        }   
}