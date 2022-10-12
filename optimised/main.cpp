#include<bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){
    unsigned long long n=800000;
    bool end = false;
    if(argc == 2){
        string temp;
        temp = argv[1];
        n = stoull(temp);
    }
    string a, str;
    unsigned long long mult = 90000000000;
    system("cp input.bac input && cp output.bac output && cp cmd.bac cmd");
    system("cp maxnumber.bac maxnumber");
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
        
        if(end) break;
        
        if(a == "1" && mult == 1){
            ofstream maxnumber_change("maxnumber");
            maxnumber_change << n-1; 
                //док-во что это точно правильное число есть в папке
            end = true;
            mult = 0;
            n--;
        }
        else if(a == "1"){
            n -= mult;
            if (mult == 9)
                mult = 1;
            else
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
