/*
BUBT CSE-56-07
ID: 20254103279
Name: Makhzum-Bin-Harun
Problem Statement: Sort an array in Ascending Order using the Data Structure of Bubble Sort
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N = 5;
    int arr[N] = {5, 4, 3, 2, 1};
    cout << "Before Sorting\n";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }

    cout << "\nAfter Sorting (Ascending Order)\n";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

return 0;
}
