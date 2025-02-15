#include <bits/stdc++.h>
using namespace std;

void explainVector(int n)
{

    vector<int> v(5,20);
    v.push_back(1);
    v.emplace_back(3);
    cout << v[0] << endl;

    for(int i=0; i<v.size(); i++){

        cout << v[i] << " ";
    }

}
int main()
{
    int n;
    cin >> n;
    explainVector(n);
    return 0;
}