#include<bits/stdc++.h> 
using namespace std; 
int main()
{ 
  string s,s1; 
  getline(cin,s); 
  getline(cin,s1); 
  int len = s1.length(); 
  do
  { 
     int pos=s.find(s1); 
	 if(pos==-1) break; 
	 s.erase(pos,len); 
  } while(true); 
  for(int i=0;i<s.size();i++){cout<<s[i];} 
}
