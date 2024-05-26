#include <iostream>
#include <climits>
using namespace std;

int largestRowSum(int arr[][3], int row, int col) {
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int row = 0; row < 3; row++) {
        int sum = 0;
        for(int col = 0; col < 3; col++) {
            sum = sum + arr[row][col];
        }
        if(sum > maxi) {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "The maximum sum is: " << maxi << endl;
    return rowIndex;
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int row = 3;
    int col = 3;

    int rowIndex = largestRowSum(arr, row, col);
    cout << "The row with the maximum sum is: " << rowIndex << endl;

    return 0;
}
