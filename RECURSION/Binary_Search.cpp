#include <iostream>
using namespace std;

int binarySearch(int a[], int low, int high, int x)
{
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == x)
        return mid;

    if (x < a[mid])
        return binarySearch(a, low, mid - 1, x);
    else
        return binarySearch(a, mid + 1, high, x);
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int x = 40;

    int result = binarySearch(a, 0, 4, x);

    if (result == -1)
        cout << "Not Found";
    else
        cout << "Found at index " << result;

    return 0;
}