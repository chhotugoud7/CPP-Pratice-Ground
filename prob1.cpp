#include<iostream>

using namespace std;

int  main(){

    int sp, cp;
    cout<<"Enter selling price: "<<endl;
    cin>>sp;

    cout<<"Enter cost price: "<<endl;
    cin>>cp;

    if(sp>cp){
        int profit = sp-cp;
        cout<<"Your profit is: "<<profit<<endl;

    }
    else if(cp-sp){
        int loss = cp-sp;
        cout<<"Your loss is: "<<loss<<endl;
    }
    else{
        cout<<"No Profit or Loss"<<endl;
    }

    return 0;

}