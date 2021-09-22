#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c, d;
    cin>>n;
    do
    {
        n++;
        a= n%10;
        b= (n/10)%10;
        c= (n/100)%10;
        d= (n/1000)%10;
    }
    while(a==b||a==c||a==d||b==c||b==d||c==d);
    cout<<n<<endl;
}
