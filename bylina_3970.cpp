#include <iostream>
#include <vector>
using namespace std;

int myLowerBound(const vector<int>& arr, int x) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] < x) left = mid + 1;
        else right = mid;
    }
    return left;
}

int myUpperBound(const vector<int>& arr, int x) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] <= x) left = mid + 1;
        else right = mid;
    }
    return left;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    while (m--) {
        int x;
        cin >> x;
        int l = myLowerBound(arr, x);
        int r = myUpperBound(arr, x);
        cout << r - l << "\n";
    }
    return 0;
}
