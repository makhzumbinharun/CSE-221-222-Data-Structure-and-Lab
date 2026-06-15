#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < N - 1; i++) {
        int min_idx = i;

        for(int j = i + 1; j < N; j++) {
            if(arr[min_idx] > arr[j]) {
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
