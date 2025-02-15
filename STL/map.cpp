#include <bits/stdc++.h>
using namespace std;

void explainMap(int n)
{
  
    map<int, int> m;
    m.insert({1,2});
    m.emplace(3,4);

    auto len = m.size();
    cout << len << endl;

    for(auto it : m){
        cout << it.first << " " << it.second << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    explainMap(n);
    return 0;
}