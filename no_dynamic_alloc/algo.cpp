#include <bits/stdc++.h>
using namespace std;


//придумать как найти макс возможно число для компьютера на котором запускается программа
// ОС любая на выбор (выбор из Windows 11 и Linux 5.19.2)


void SieveOfEratosthenes(unsigned long long n)
{
    
    bool prime[n];
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
            system("cp answer.bac answer");
            ofstream ans("answer");
            ans << p;
            return;
        }
}





int main(int argc, char* argv[]){
    string size;
    size = argv[1];
    ofstream fout("input");
    fout << "1";
    fout.close();
    
    SieveOfEratosthenes(stoull(size));
    ofstream foutt("input");
    foutt << "0";
    foutt.close();
    return 0;
    
}
