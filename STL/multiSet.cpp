#include <bits/stdc++.h>
using namespace std;

void explainSet(int n)
{
  
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    auto len = ms.size();
    cout << len << endl;

    ms.erase(2);

    len = ms.size();
    cout << len << endl;

    auto it = ms.find(2);
    cout << *it;

}
int main()
{
    int n;
    cin >> n;
    explainSet(n);
    return 0;
}