#include<iostream> 
#include<fstream> 
#include<string.h> 
using namespace std;
int main() 
{ 
char string[80]; 
cout<<"Enter a String \n"; 
cin>>string; 
int len = strlen(string); 
fstream file; 
file.open("text1.txt", ios::in | ios::out); 
for(int i=0;i<len;i++) 
file.put(string[i]); 
file.seekg(0); 
char ch; 
while(file) 
{ 
file.get(ch); 
cout<<ch; 
} 
return 0; 
}
