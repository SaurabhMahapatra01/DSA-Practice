#include<bits/stdc++.h>
using namespace std;

double GSum(int n)
{
    if(n==0){
        return 1;
    }
    double ans = GSum(n-1) + 1 /(double)pow(3,n);
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<GSum(n);
    return 0;
}
