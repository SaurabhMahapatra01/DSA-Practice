#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<string,int>freq;
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
   	string s;
   	cin>>s;
   	if(freq[s]==0){
   		cout<<"OK"<<endl;
   	}
   	else{
   		cout<<s<<freq[s]<<endl;
   	}
   	freq[s]++;
   }	

	return 0;
}