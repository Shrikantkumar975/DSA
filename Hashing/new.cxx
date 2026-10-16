#include<iostream>
using namespace std;

int main() {
    int n; // Declare a variable to store the size of the array

    // Take input for the size of the array
    cin >> n;

    int arr[n]; // Declare an array of size n

    // Take input for the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Iterate over the array to count duplicate elements
    for (int i = 0; i < n; i++) {
        int count = 0; // Initialize a variable to store the count of duplicate elements
        if(arr[i] != -1){
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++; 
                    if(i != j) // Don't mark the current element as visited
                        arr[j] = -1; // Mark the duplicate element as visited
                }
            }
            cout << arr[i] << ": " << count << endl;
        }
    }

    return 0;
}