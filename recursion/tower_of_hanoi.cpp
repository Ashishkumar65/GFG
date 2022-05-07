#include<bits/stdc++.h>
using namespace std;
 void Toh(int n,char a,char b,char c){
     if(n==1){
         cout<<"move disc 1 from "<<a<<" to "<<c<<endl;
         return;
     }
     Toh(n-1,a,c,b);
     cout<<"move disc "<<n <<" from "<<a<<" to "<<c<<endl;
     Toh(n-1,b,a,c);
 }

 int main(){
     int n;
     cin>>n;
     Toh(n,'a','b','c');
     return 0;
 }

 /*  
 #include <iostream>
using namespace std;


void ToH(int n, char A, char B, char C) 
{ 
    if (n == 1) 
    { 
        cout<<"Move 1 from " <<  A << " to " << C << endl; 
        return; 
    } 
    ToH(n-1, A, C, B); 
    cout<<"Move " << n << " from " <<  A << " to " << C << endl; 
    ToH(n-1, B, A, C); 
}
	
int main() {
	
	int n = 2; 
    
    ToH(n, 'A', 'B', 'C'); 
	
	return 0;
}
 
 
 
 */