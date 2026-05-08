#include<iostream>

using namespace std;

int main() {
  
    cout<<"enter the score: "<<endl;
    int score;
    cin>>score;
    
    if (score>80){
        cout<<"well done!"<<endl;
    }
    else if(score>50){
        cout<<"can improve"<<endl;
    }
    else{
        cout<<"poor performance"<<endl;
    }

    return 0;
}