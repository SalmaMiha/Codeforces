#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0, a=0;
    cin>>n;
    string s;
    while(i<n)
    {
        i++;
        cin>>s;
        if(s=="X++"||s=="++X")
            a++;
        else
            a--;
    }
    cout<<a<<endl;
}
