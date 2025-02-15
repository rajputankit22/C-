#include <bits/stdc++.h>
using namespace std;

void explainVector(int n)
{

    vector<int> v = {1,2,3,4,5};
    // // vector<int> :: iterator it = v.begin();
    // // auto it = v.begin();

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << endl;
    // }

    // // cout << *it << endl;
    for (auto it : v){
        cout << it << " ";
    }
    cout << endl;

    // v.erase(v.begin()+1, v.begin()+3);
    v.insert(v.begin()+1, 2, 10);

    vector<int> a;

    cout << a.empty() << endl;

    for (auto it : v){
        cout << it << " ";
    }
    // auto a = 5;
    // cout << a << endl;
}
int main()
{
    int n;
    cin >> n;
    explainVector(n);
    return 0;
}