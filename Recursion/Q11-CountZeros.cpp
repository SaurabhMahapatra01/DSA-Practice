#include<iostream>
using namespace std;
int helper(int n, int c);
int Count0s(int n)
{
    return helper(n, 0);
}
int helper(int n, int c)
{
    if(n==0) {
        return c;
    }
    int rem = n%10;
    if(rem==0) {
        return helper(n/10, c+1);
    }
    return helper(n/10, c);
}
int main()
{
    int N;
    cin>>N;
    cout<<Count0s(N);
}