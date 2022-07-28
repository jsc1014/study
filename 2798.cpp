#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    int arr[101] = {0, };
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    
    int sum;
    int close = 0;
    for(int i = 0 ; i < N - 2 ; i++){
        for(int j = i+1; j < N - 1 ; j++){
            for(int k = j+1; k < N; k++){
                sum = arr[i] + arr[j] + arr[k];
                if (sum > M) 
                    continue;
                else if(M-sum < M-close)
                    close = sum;
            }
        }
    }

    cout << close;
}