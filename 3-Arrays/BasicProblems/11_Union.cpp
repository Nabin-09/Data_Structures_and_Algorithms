#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr1(n);
    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int i = 0, j = 0;
    vector<int> unionArr;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (arr1[i] <= arr2[j])
            {
                if (unionArr.size() == 0 || unionArr.back() != arr2[j])
                {
                    unionArr.push_back(arr2[i]);
                }
                j++;
            }
        }
    }
    while (j < m)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j])
            unionArr.push_back(arr2[j]);
        j++;
    }
    while (i < n)
    {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i])
            unionArr.push_back(arr1[i]);
        i++;
    }
    for (int &nums : unionArr)
        cout << nums << " ";
    return 0;
}