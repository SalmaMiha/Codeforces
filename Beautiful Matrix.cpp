#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5],i,j,m,n;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                m=i;
                n=j;
            }
        }
    }
    m=abs(2-m);
    n=abs(2-n);
    cout<<m+n<<endl;
}
