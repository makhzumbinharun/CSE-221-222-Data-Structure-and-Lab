#include <bits/stdc++.h>
using namespace std;

void b_search(int arr[], int N, int s) {
    int start = 0;
    int end = N - 1;

    bool found = false;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == s) {
            cout << s << " IS FOUND IN POSITION " << mid + 1 << endl;
            found = true;
            break;
        }
        else if (arr[mid] < s) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "NOT FOUND IN THE ARRAY!" << endl;
    }
}

int main() {
    int N;

    cout << "ENTER THE SIZE OF THE ARRAY: ";
    cin >> N;

    int arr[N];

    cout << "ENTER SORTED ARRAY ELEMENTS:\n";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int s;

    cout << "Enter the value to search: ";
    cin >> s;

    b_search(arr, N, s);

    return 0;
}
