#include<bits/stdc++.h>
using namespace std;

bool check_isPrime(int n){

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;

}

int main(){

    int n;
    cin >> n;

    if(check_isPrime(n)){
          cout << "Prime number";
    }
    else
    {
        cout << "Not a Prime number";   
    }

    return 0;
}