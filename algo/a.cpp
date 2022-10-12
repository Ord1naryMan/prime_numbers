#include <bits/stdc++.h>
using namespace std;


void SieveOfEratosthenes(unsigned long long n)
{
    
    bool* prime = new bool[n]; 
    for(unsigned long long i=0; i<n;i++){
        prime[i] = true;
        
    }
    for (unsigned long long p = 2; p * p < n; p++) {
        if (prime[p] == true) {
            for (unsigned long long i = p * p; i < n; i += p)
                prime[i] = false;
        }
    }
    for (unsigned long long p = n-1; p >= 2; p--)
        if (prime[p]){
            cout << p;
            return;
        }
}

int main(){
    SieveOfEratosthenes(4990586856);
    return 0;
}
