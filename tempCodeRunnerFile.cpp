#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        int mid = n / 2;
        arr[mid] = n;
        int val = 1;

        int l = mid - 1, r = mid + 1;
        bool toggle = true;

        while (l >= 0 || r < n) {
            if (toggle && l >= 0) {
                arr[l--] = val++;
            } else if (!toggle && r < n) {
                arr[r++] = val++;
            }
            toggle = !toggle;
        }

        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }

    return 0;
}
