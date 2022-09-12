#include<iostream>
#include<quene>
using namespace std;


typedef long long ll;
int main()
{
	int n, m;
	cin>>n>>n;
	ll arr[n];
	for(int i=0;i<n;i++)
	{
      cin>>arr[i];
	}
	sort(arr,arr+n);
	quene<ll> q;
	int count_m=0;
	int end_p=n-1;
	for(int i=0;i<m;i++)
	{
		int curr_m;
		cin>>curr_m;
		int ans;
		for(;count_m<curr_m;count_m++)
		{
			if(end_p >= 0 && (q.empty() || arr[end_p]>=q.front())){
				ans=arr[end_p];
				end_p--;
			}
			else{
				ans = q.front();
				q.pop();

			}
			q.push(ans/2);
		}
		cout<<ans<<endl;
	}

	return 0;
}