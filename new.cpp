#include <bits/stdc++.h>
using namespace std;
 
char *removeDuplicate(char str[], int n)
{
   // Used as index in the modified string
   int index = 0;   
    
   // Traverse through all characters
   for (int i=0; i<n; i++) {
        
     // Check if str[i] is present before it  
     int j;  
		cout<< str[i] << " " << int(str[i]) << endl;
     for (j=0; j<i; j++) {
        if (str[i] == str[j]){
           break;
		}
	 }
      
     // If not present, then add it to
     // result.
     if (j == i)
        str[index++] = str[i];
   }
    
   return str;
}
 
// Driver code
int main()
{
   char str[]= "geeksforgeeks";
   int n = sizeof(str) / sizeof(str[0]);
   //cout << removeDuplicate(str, n);
str[4] = '\0';
cout<<str;
   return 0;
}
