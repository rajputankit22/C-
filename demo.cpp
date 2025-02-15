#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

void explainMap(int n)
{

    // pair<int, int> a[] = {{1,2},{2,1},{4,1}};
    // sort(a, a+3, comp);

    // for(auto it : a){
    //     cout << it.first << " " << it.second << endl;
    // }

    // int num = 6;
    // int count = __builtin_popcount(num);
    // cout << count << endl;

    string s = "231";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    

}
int main()
{
    int n;
    cin >> n;
    explainMap(n);
    return 0;
}