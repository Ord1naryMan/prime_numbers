#include<bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    unsigned long long n=800000;
    if(argc == 2){
        string temp;
        temp = argv[1];
        n = stoull(temp);
    }
    string a, str;
    unsigned long long mult = 10000000;
    system("cp input.bac input && cp output.bac output && cp cmd.bac cmd");
    while(true){
        
        n+=mult;
        str = "./algo.out " + to_string(n);
        
        ofstream fout("cmd");
        fout << str;
        fout.close();
        
        system("./cmd");
        
        ifstream fin("input");
        fin >> a;
        fin.close();
        
        if(a == "1" && mult == 1){
            break;
        }
        else if(a == "1"){
            n -= mult;
            mult/=10;
        }
        
    }
    ifstream ans("answer");
    string answer;
    ans >> answer;
    
    system("clear");
    cout << setw(20) << "-------------------------------------\n";
    cout << setw(20) << answer << "\n";
    cout << setw(20) << "-------------------------------------\n";
    return 0;
}
