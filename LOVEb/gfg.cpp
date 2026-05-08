#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int b = n;
    // for (int k = 1; k <= n; k++)
    // {

    //     for (int i = 1; i <= n; i++)
    //     {

    //         int a = (n - i + 1);
    //         for (int j = 1; j <= b; j++)
    //         {
    //             cout << a;
    //         }
    //         a--;
    //     }

    //     cout << endl;
    //     b--;
    // }

    //   
    int n;
    cin>>n;
        int mask = 1;
        while(mask < n){   
            mask = (mask << 1) + 1;   
        } 
        int ans = n ^ mask ;
        cout<< ans;
    return 0;
}