#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <=1) { return n;}
    return fibonacci(n-1) + fibonacci(n-2);
}


int main()
{

    string str;
    cin >> str;

    int hash[26] = {0};
    for(int i=0; i<str.size(); i++){
        // cout << str[i] - 'a' << endl;
        hash[str[i] - 'a'] += 1;
    }

    int q;
    cin >> q;
    while(q>0){
        char c;
        cin >> c;
        cout << hash[c-'a'] << endl;
        q -= 1;
    }

    return 0;
}