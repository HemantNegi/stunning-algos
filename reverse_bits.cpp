#include<bits/stdc++.h>

using namespace std;

int main(){
    cout << "Program to reverse the bits of input.\n\n";
    int num[] = {12, 12, 14, 90, 14, 14, 14};
    int sum = 0;
    for(int i=0; i<(sizeof(num)/sizeof(num[0])); i++){
        sum ^= num[i];
//        cout<<"\n sum= "<< sum << "  num[i]= "<< num[i];
    }

    cout << "The duplicated number is: "<< sum;
    return 0;
}
