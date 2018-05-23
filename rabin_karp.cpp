#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string>

#define prime 101

using namespace std;

int next_hash(int hx, int last, int next, int d){


    int rhx = (((hx - last*d) * 10) + next) % prime;

    if(rhx < 0){
        rhx = rhx + prime;
    }

    cout << " \nrhx: "<< rhx;
    return rhx;
}

void karp_rabin(string text, string patn){
    cout << "Prime number is: "<< prime; 

    int d = 1;
    for(int i=0; i < patn.length()-1; i++){
        d = (d * 10) % prime;
    }

    int hx = 0; // text hash
    int hy = 0; // pattn hash
    for(int i=0; i < patn.length(); i++){
        hx = (hx * 10 + text[i]) % prime;
        hy = (hy * 10 + patn[i]) % prime;
    }

    cout << "\nhx: "<< hx << "   hy: " << hy;
    for(int i=0; i < text.length() - patn.length() + 1; i++ ){
        if(hx == hy) {
            cout<< "\npattern found at: "<< i;
        }
        hx = next_hash(hx, text[i], text[i + patn.length()], d);
    }
}



int main(){
    printf("Pattern matching by karp rabin method. \n\n");
    string text = "asdasdasdasd";
    //cout << "Enter the text: ";
    //getline(cin, text);

    string patn = "asd";
    //cout << "Enter the pattern: ";
    //getline(cin, patn);
    karp_rabin(text, patn);
    return 0;
}
