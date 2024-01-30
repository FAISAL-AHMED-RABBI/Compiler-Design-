
#include <iostream>
#include <climits>

using namespace std;
int main() {
    // Define an array
    int arr[] = {5, 2, 8, 1, 3};

    // Initialize min and max with extreme values
    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    // Iterate through the array to find min and max
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    // Display the minimum and maximum values
    cout << "Minimum value: " << minVal <<endl;
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}
