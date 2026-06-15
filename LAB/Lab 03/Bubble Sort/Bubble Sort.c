#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int arr[N];
	for(int i = 0; i < N; i++){
	    scanf("%d", &arr[i]);
	}
	
	
	for(int i = 0; i < N - 1; i++){
        int flag = 1;
        for(int j = 0; j < N - i - 1; j++){
            int temp;
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        if(flag){
            break;
        }
    }

    for(int i = 0; i < N; i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}
