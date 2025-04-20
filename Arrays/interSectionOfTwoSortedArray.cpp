#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> arr(m, 0);
	vector<int> inter;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr1[i] == arr2[j] && arr[j] == 0){
				inter.push_back(arr1[i]);
                arr[j] = 1;
				break;
			}
            if(arr2[j] > arr1[i]) break;
		}
	}
	return inter;

}

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector<int> inter;
    int i = 0;
    int j = 0;
    while (i<n && j<m)
    {
        if(arr1[i] == arr2[j]){
            inter.push_back(arr1[i]);
            i++;
            j++;
            continue;
        }
        if(arr1[i]< arr2[j]){
            i++;
        }else{
            j++;
        }

    }
    
	return inter;

}
int main()
{
    vector<int> arr1 = {1,2,2,2,3,4};  // 3,2,1,4,5,6,7
    vector<int> arr2 = {2,2,3,3};  // 3,2,1,4,5,6,7
    vector<int> arr3 = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
    for (int i = 0; i < arr3.size(); i++)
    {
        /* code */
        cout <<"--" << arr3[i] << endl;
    }
    return 0;
}