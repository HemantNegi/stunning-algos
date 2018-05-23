// Program to print binary of input number.
#include<bits/stdc++.h>

using namespace std;
int to_binary(int);

int main(){
    cout << "Program to print the binary of given number.\n\n";
    cout << "Enter the number: ";
    int num;
    cin>>num;
    
    cout<< "\nThe binary of "<< num << " is: "<< to_binary(num);
    return 0;
}

int to_binary(int num){
    int bin=0, i=1;
    while(num){
       bin +=  (num % 2) * i;
       num = num / 2;
       i *= 10;
    }
    return bin;
}
