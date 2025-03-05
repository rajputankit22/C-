#include <bits/stdc++.h>
using namespace std;

bool palindrome(int i, int n, string str){
    cout  << i << " " << n << endl;
    if (i >= n/2) return true;
    if(str[i] != str[n-i-1]) return false;

    return palindrome(i+1, n, str);

}


int main()
{

    string str;
    cin >> str;
    cout << str.size() << endl;
    cout << palindrome(0, str.size(), str) << endl;
    return 0;
}