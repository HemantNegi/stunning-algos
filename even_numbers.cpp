// program to calculate even numbers upto the given numbers from 0

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    cout << "Enter a number upto which even number should be calculated: ";
    int num;
    cin>>num;
    for(int i=0; i<=num; i+=2){
        cout<<i<<" ";
    }
    
    cout<<endl;
    return 0;
}
