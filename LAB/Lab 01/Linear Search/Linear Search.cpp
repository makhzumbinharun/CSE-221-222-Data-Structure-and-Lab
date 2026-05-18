#include <bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int N, int s){
    int found = 0;
	for(int i = 0; i < N; i++){
	    if(arr[i] == s) cout << s << " IS FOUND IN POSITION " << i+1; found = 0;
	    if(arr[i] != s) found++;
	}
	
	if(found != 0) cout << "NOT FOUND IN THE ARRAY!" << endl;
}


int main() {
    int N;
    cout << "ENTER THE SIZE OF THE ARRAY: ";
	cin >> N;
	int arr[N];
	for(int i = 0; i < N; i++){
	    cin >> arr[i];
	}
	
	int s;
	cout << "Enter the value to search: ";
	cin >> s;
	linear_search(arr, N, s);
	
return 0;
}

