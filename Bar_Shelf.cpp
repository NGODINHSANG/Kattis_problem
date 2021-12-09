#include <bits/stdc++.h>
#define ft(i,x,y) for(int i=x;i<=y;i++)
#define ftd(i,x,y) for(int i=x;i>=y;i--)
#define ftm(i,x,y) for(int i=x;i<y;i++)
#define ftdm(i,x,y) for(int i=x;i>y;i--)
#define fi first
#define se second
#define add push_back
#define ad push
using namespace std;

void io()
{
    freopen(".inp","r",stdin);
    freopen(".out","w",stdout);
}
int n;
int a[200002];
struct
{
    long long tree[600003];

    void update(int x,long long w)
    {
        while(x<=600001)
        {
            this->tree[x]+=w;
            x+=x & (-x);
        }
    }
    long long _get(int x)
    {
        long long tmp = 0;
        while(x>0)
        {
            tmp+=this->tree[x];
            x-=x & (-x);
        }
        return tmp;
    }
} a1,a2;
vector <int> X;
int main()
{
    scanf("%d",&n);
    ft(i,1,n) scanf("%d",&a[i]);
    ft(i,1,n)
    {
        X.add(a[i]);
        X.add(a[i]/2);
        X.add(2*a[i]);
    }
    sort(X.begin(),X.end());
    long long res=0;
    ftd(i,n,1)
    {
        int pos = lower_bound(X.begin(),X.end(),a[i])-X.begin()+1;
        int _pos = lower_bound(X.begin(),X.end(),2*a[i])-X.begin()+1;
        int __pos = lower_bound(X.begin(),X.end(),a[i]/2)-X.begin()+1;
        long long f =   a1._get(pos);
        res = res + a2._get(__pos);
        a1.update(_pos,1);
        a2.update(pos,f);

    }
    cout << res;
    return 0;
}


