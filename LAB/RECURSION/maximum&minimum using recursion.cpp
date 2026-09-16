#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int index, int &minVal, int &maxVal) {
    // Base case
    if (index == n)
        return;

    // Update minimum
    if (arr[index] < minVal)
        minVal = arr[index];

    // Update maximum
    if (arr[index] > maxVal)
        maxVal = arr[index];

    // Recursive call
    findMinMax(arr, n, index + 1, minVal, maxVal);
}

int main() {
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int minVal = arr[0];
    int maxVal = arr[0];

    findMinMax(arr, n, 0, minVal, maxVal);

    cout << "Minimum = " << minVal << endl;
    cout << "Maximum = " << maxVal << endl;

    return 0;
}