#include <bits/stdc++.h>
using namespace std;

void explainVector(int n)
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << endl;
    cout << v[1] << endl;

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({3, 4});
    vp.emplace_back(3, 4);
    cout << vp[0].first << endl;

}
int main()
{
    int n;
    cin >> n;
    explainVector(n);
    return 0;
}