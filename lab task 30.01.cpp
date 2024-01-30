#include <iostream>

using namespace std;
int main()
 {
    // Define an array
    int arr[] = {1, 2, 3, 4, 5};

    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
        sum += arr[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / sizeof(arr) / sizeof(arr[0]);

    // Display the average
    cout << "Average: " << average << endl;

    return 0;
}
