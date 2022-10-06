#include<bits/stdc++.h>
using namespace std;
int main()
{

  stack<int> s;
  s.push(10);
  s.push(15);	
  s.push(20);
  // cout<<s.size()<<endl;
  // cout<<s.top()<<endl;
  // s.pop();
  // cout<<s.top()<<endl;

  while(s.empty() == false){
  	cout<<s.top()<<endl;
  	s.pop();
  	// cout<<s.size()<<endl;

  }
	return 0;
}