#include<bits/stdc++.h>
using namespace std;


void seive_algorithm_generate_primes_upto_n(int n){
    if(n < 2){
        cout << "Prime numbers start from 2";
        return;
    }
    
    // setting all numbers as primes in the starting 
    bool primes[n+1];
    memset(primes, true, sizeof(primes));
    
    // Starting from 2 because 1 is not prime and prime numbers start from 2.
    // Traversing until i * i, becuase if n is 50 then 48 will already be marked by 2,4,6 and 7 * 7 will be 49 and outer loop stops here and no need to check from 8 to 50 because 48
    // is already marked by 2, 4, 6 and no need to check again with 8.
    for(int i = 2 ; i * i <=n ; i++){

        // Go inside only if that index value is true and it is a prime if it is true and mark all it multiples to false
        if(primes[i] == true){

            // We are starting from i * i because the values before i * i will already be marked by the previous value of i
            // Suppose if we start outer loop at 2 and for 2 the inner loop will mark 4,6,8,12.....n as false.
            // SO if we come to i = 3 point in the outer for loop, then no need to mark 6 again as it already marked by 2 and we can start from 3 * 3 = 9.
            for(int j = i * i; j <=n ; j += i){
                primes[j] = false;
            }
        }
    }

    for(int i = 2; i <= n ; i++){
        if(primes[i]){
            cout << i << " ";
        }
    }


}


int main(){
    int n;
    cin >> n;
    cout << "Prime numbers from 2 to "<< n << ": \n";
    seive_algorithm_generate_primes_upto_n(n);
    return 0;
}


/*
Time complexity -  O(nloglogn)
*/