#include <iostream>
#include <vector>
#include <math.h>
#include <cstdint>

using namespace std;


int main(){
    
    unsigned int N;
    N = 999999999999;
    // cin >> N;

    int digits = 200000;
    int div;

    vector<int> tmp1(digits);
    int tmp2;
    for(int i=digits; i>=0; i--){
        div = pow(10, i);
        tmp2 = ceil(N/div);

        if(div>N){
            continue;
        }
        

        if(tmp2 != 0){
            N -= div*tmp2;
            tmp1[i] = tmp2;
        }
        
        // cout << tmp2 << endl;

    }

    int result = 0;
    for(int i=0; i<digits; i++){
        result += tmp1[i];
    }

    int result2 = result%9;

    string ans;

    if(result2==0){
        ans="Yes";
    }else{
        ans = "No";
    }
    cout << ans << endl;
    // cout << result2 << endl;
}