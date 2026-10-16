#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n=0;
    cout << "n: " ;
    cin >> n;

    vector<int> arr(n);

    for(int i=0;i<n;i++) cin >> arr[i];

    for(int i=0;i<n-1;i++){
        int didswap = 0; // Here we add a check whether in one iteration any two values swaps or not 
        // if not only one time outer loop and upto n time inner loop will be run 
        // so the time complexity become O(n)
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                didswap = 1;
            }

        }
        // // cout << arr[n-1];
        // break;3

        if (didswap == 0) break;
        for(int i=0;i<n;i++) cout << arr[i] << " ";
        cout << endl;
    }
    // if the array is not already sorted both the loops will run and time coomplexity will be O(n^2)

}