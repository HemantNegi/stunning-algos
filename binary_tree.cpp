#include<bits/stdc++.h>

using namespace std;

int arr[20];
void print_tree();

int left_child(int i){
    return (2 * i) + 1;
}

int right_child(int i){
    return (2 * i) + 2;
}

int main(){
    cout << "Program implements Binary tree\n\n";
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    print_tree();
    left_child(1);
    return 0;
}

void print_tree(){
    cout << arr[0];
}
