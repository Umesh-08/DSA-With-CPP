// Program: Linear Search
// Language: C++
// Topic: Arrays
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int i, n, search, found = 0;

    cout << "Enter the array size: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter " << n << " elements: ";

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the element to search: ";
    cin >> search;

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            cout << "Element found at index = " << i << endl;
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Element not found in the array";
    }

    return 0;
}
