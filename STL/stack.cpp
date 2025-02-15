#include <bits/stdc++.h>
using namespace std;

void explainVector(int n)
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.top() << endl;
    cout << st.size() << endl;
     st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
}
int main()
{
    int n;
    cin >> n;
    explainVector(n);
    return 0;
}