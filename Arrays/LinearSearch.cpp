// Linear Search Program in C++
// Time Complexity: O(n)

#include<iostream>
using namespace std;

int main()
{
    int n, i, key, found = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements:\n";

    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            cout << "Element found at index " << i;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Element not found";
    }

    return 0;
}
