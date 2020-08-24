#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


int main(){
    int n;
    cin >> n;
    int input;
    cin >> input;
    vector<int> tmp1;
    tmp1.push_back(input);

    int tmp2 = tmp1[0];
    int tmp3 = 0;
    for(int i=1; i<n; i++){
        if(tmp1[i]>tmp2){
            tmp3 += tmp1[i] - tmp2;
            tmp2 = tmp1[i] + tmp3;
        }
    }

    cout << tmp3 << endl;

}