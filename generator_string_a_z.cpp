#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX = 26; 
// Returneaza un sir cu litere albitrare de lungime n
string printRandomString(int n) { 
    char alphabet[MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
  
    string res = ""; 
    for (int i = 0; i < n; i++) {
        res = res + alphabet[rand() % MAX]; 
    }  
    return res; 
} 
  
// Driver code 
int main() { 
   srand(time(NULL)); 
   int n = 10; 
   for(int i = 0; i < n; i++){
   cout << printRandomString(n); 
   cout << " ";
   }
   return 0; 
} 