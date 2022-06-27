#include <iostream>
using namespace std;

void print_subsequences(string s,string output)
{
    if(s.length()==0)
    {
        cout<<output<<endl;
        return;}
    print_subsequences(s.substr(1),output);
    print_subsequences(s.substr(1),output+s[0]);
    
}
int main()
{
    string s="abc";
    string output="";
    print_subsequences(s,output);
}
