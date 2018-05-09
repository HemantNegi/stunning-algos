#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string>

using namespace std;

unsigned long long next_hash(long long int hx,
        int d,
        unsigned short int prev, 
        unsigned short int next){
	cout<<"\n ((hx - prev * d) << 1) + next ==> ";
	cout<<"("<<hx << " - " << prev << " * "<< d << ")"<< " + "<< next;
	cout<< " (prev*d)==>" << (prev*d);
	unsigned long long x = ((hx - (prev*d)) << 1) + next;
    return x;
}

void  karp_rabin(string text, string patn){
    int tl = text.length();
    int pl = patn.length();
    unsigned long long  hx = 0;  // hash of text
    unsigned long long  hy = 0;  // hash of pattern.

    int d = 1<<(pl-2);
    cout << "\n d= "<<d;
    // calculate the place value number eg. 100
    // this will help in avoiding collision.
    for(int i=0; i < pl; i++){
       hx = (hx << 1) + text[i];
       hy = (hy << 1) + patn[i];
    }
    for(int i=0; i<(tl - pl + 1); i++){
        if(hx == hy){
        // if(hx == hy && memcmp(&patn, &text + i, pl) == 0){
         cout << "\nFound at position: " << i;
        }
        // cout << "-" <<hx;
		cout<<"\nhx: "<< hx <<"  hy: "<< hy;
        hx = next_hash(hx, d, text[i], text[i+pl]);
    } 


    cout <<"\n\nText: " <<  text << "\nPatn: "<< patn;
//    return matches;
}


int main(){
    printf("Pattern matching by karp rabin method. \n\n");
    string text;
    cout << "Enter the text: ";
    getline(cin, text);

    string patn;
    cout << "Enter the pattern: ";
    getline(cin, patn);
    karp_rabin(text, patn);
    return 0;
}
