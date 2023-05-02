#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    string s="Alohomora";
    while(s[0]!='\0')
    {
        
        cout<<s.substr(2)<<endl;
        s=s.substr(2);
    }
    return 0;
}
