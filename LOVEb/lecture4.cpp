#include <iostream>
using namespace std;

int main()
{
    /*
    // problem 1
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
             cout <<"*";
             j++;
        }
        cout<<endl;
        i++;
    }
    */
    /*

    //problem 2

    int n;
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<i;
            j = j+1;
        }
        cout<<endl;
        i = i +1;
    }
    */

    /*

     //problem 3

     int n;
     cin>>n;

     int i =1;
     while (i<=n)
     {
         int j =1;
         while (j<=n)
         {
             cout<<j;
             j++;
         }
         cout<<endl;
         i++;
     }
     */

    /*

     //problem 4

     int n;
     cin>>n;

     int i =1;
     int count = 1;
     while (i<=n)
     {
         int j =1;
         while (j<=n)
         {
             cout<<count<<" ";
             count = count +1;
             j++;
         }
         cout<<endl;
         i++;
     }
    */

    /*
     
    // problem 5

    int n;
    cin >> n;

    int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout<<n-j+1; // formula
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    
    // problem 6

    int n;
    cin >> n;

    int i = 1;
    int count =1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            // cout<<"*"; // for print starts
            // cout<<i;    // for print row number
            cout<<count<<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

     */

    /*
    
    // problem 7

    int n;
    cin >> n;

    int row = 1;
    
    while (row <= n)
    {
        int col = 1;
        int value = row;   // by value manupulating
        while (col <= row)
        {
            //cout<< value <<" " ;
            //value = value + 1;  
            // dusra tareeka
            //cout<<row+col-1;
            //cout<<row-col+1;  // by formula
            //dusra tareeka
            cout<<value;
            cout<<" ";
            value--;
            col++;
        }
        cout << endl;
        row++;
    }
     */

    /*
    
    // problem 8


    int n;
    cin >> n;

    int row = 1;
      
    while (row <= n)
    {
        int col = 1;
       char ch = 'A'+n-row;
        while (col <= row)
        {   
            // char ch = 'A'+ row -1;  // for rows
           //char ch = 'A'+n-row+col -1;
            cout<<ch ;
            ch++;
            
            col++;
        }
        cout << endl;
        row++;
    }
     */

    /*
   
    //problem 9 ---> space triangle problems

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        // loop for space triangle
        int space = n - row;
        while (space)
        {
            cout<<" ";
            space = space -1;
        }
        //loop for number triangle
        int star = row;
        while (star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
        row++;
    }
     */

    /*
    
    //problem 10 ---> space triangle problems

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        // loop for space triangle
        int space = row - 1;
        while (space)
        {
            cout<<"-";
            space = space -1;
        }
        //loop for number triangle
        int star = n - row +1;
        int value= row;
        while (star)
        {
            cout<<value;
            value++;
            star--;
        }
        cout<<endl;
        row++;
    }
    */

    /*
   
    //problem 11 ---> space triangle problems

    int n;
    cin>>n;

    int row=1;
    int count = 1; 
    while (row<=n)
    {
        // loop for space triangle
        int space = n - row;
        while (space)
        {
            cout<<"-";
            space = space -1;
        }
        //loop for number triangle
        int star = row ;
        
        while (star)
        {
            cout<<count ;
            count = count + 1; 
            star--;
        }
        cout<<endl;
        row++;
    }
     */

    /*
   
    //problem 12 ---> space triangle problems or triple triangle problems

    int n;
    cin>>n;

    int row=1;
     
    while (row<=n)
    {
        // loop for space triangle
        int space = n - row;
        while (space)
        {
            cout<<"-";
            space = space -1;
        }
        //loop for number triangle
        int star = row ;
        int count = 1;
        while (star)
        {
            cout<<count ;
            count = count + 1; 
            star--;
        }
        //loop for third triangle
        int third = row -1;
        int count1=row -1;
        while (third)
        {
            cout<<count1;
            count1 = count1-1;
            third--;
        }
        
        cout<<endl;
        row++;
    }
     */
    
    /*
    */
    //problem 13 ---> space triangle problems or triple triangle problems
    // homework problem

    int n;
    cin>>n;

    int row=1;
     
    while (row<=n)
    {
        //first triangle

        int numbers1 = n - row +1;
        int col = 1;
        while (numbers1)
        {   
            cout<<col;
            col++;
            numbers1--;
        }
        // second triangle
        int star = 2 *(row-1);
        while (star)
        {
            cout<<"*";
            star--;
        }
        // third triangle
        int numbers2 = n - row +1;
        //int col2 = n - row +1;
        while (numbers2)
        {
            cout<<numbers2;
           // n--;
            numbers2--;
        }
        
        

        
        
        cout<<endl;
        row++;
    }
    

    return 0;
}