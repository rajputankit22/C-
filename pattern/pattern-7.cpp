    // *    
//    ***   
//   *****  
//  ******* 
// *********


#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for(int j = 0; j < i*2+1; j++){
            cout << "*";
        }
        for(int j = 0; j < n - 1 - i; j++){
            cout << " ";
        }

        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    print1(n);
    return 0;
}