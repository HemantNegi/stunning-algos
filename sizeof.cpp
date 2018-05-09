#include<bits/stdc++.h>

using namespace std;
#define my_sizeof(type) (char *)(&type+1)-(char*)(&type)
int main(){
    cout << "hello world!";
    
    int i[] = {1,2,3,4,5};
    
    cout << i << "  Size of i: " << (int*)(&i+1) - (int*)(&i);
    cout <<"\n *i: "<< *(i + 1);
    cout<<endl;
    return 0;
}
