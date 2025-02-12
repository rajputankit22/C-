//         A         
//       A B A       
//     A B C B A     
//   A B C D C B A   
// A B C D E D C B A 


#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        int breakpoint = (2*i+1)/2+1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " " << " ";
        }
        char pr = 'A';
        for(int j = 1; j <= i*2+1; j++){
            cout << pr << " ";
            if(j < breakpoint) pr++;
            else pr--;
        }
        for(int j = 0; j < n - 1 - i; j++){
            cout << " " << " ";
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