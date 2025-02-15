#include <bits/stdc++.h>
using namespace std;

void explainSet(int n)
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.emplace(4);
    st.insert(3);     // {1,2,3,4}

    auto it = st.find(3);
    cout << *it << endl;

    auto cnt = st.count(3);
    cout << cnt << endl;

    auto length = st.size();
    cout << "Size: =" << length << endl;

    // st.erase(2);
    length = st.size();
    cout << "Size: ="<< length << endl;

    auto itt = st.find(9);
    cout << *itt << endl;

    auto lit = st.lower_bound(3);
    cout << *lit << endl;

}
int main()
{
    int n;
    cin >> n;
    explainSet(n);
    return 0;
}