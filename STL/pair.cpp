#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{

    pair <int, int> p = {1,2};
    cout << p.first << " " << p.second << endl;

    pair <int, pair<int, int>> q = {3,{4,5}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr << endl;

}
int main()
{
    int n;
    cin >> n;
    print1(n);
    return 0;
}