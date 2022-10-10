// Time Compllexity : O(n)

// #include<bits/stdc++.h>
// using namespace std;

// void PrevGreater(int arr[], int n)
// {
// 	stack<int>s;
// 	s.push(arr[0]);
// 	for (int i = 0; i < n; ++i)
// 	{
// 		while(s.empty() == false && s.top() <= arr[i]){
// 			s.pop();
// 		}
// 		int prevgrea = s.empty() ? -1 : s.top();
// 		cout<<prevgrea<<" ";
// 		s.push(arr[i]);
// 	}
// }
// int main()
// {
// 	int size;
// 	cin>>size;
// 	int arr[size];
// 	for (int i = 0; i<=size; ++i)
// 	{
//        cin>>arr[i];
// 	}
// 	PrevGreater(arr, size);

// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void printPrevGreater(int arr[],int n){
    stack<int>s;
    s.push(arr[0]);
    for(int i=0;i<n;i++){
        while(s.empty()==false && s.top()<=arr[i])
            s.pop();
        int pg=s.empty()?-1:s.top();
        cout<<pg<<" ";
        s.push(arr[i]);
    }
}

int main() 
{ 
    int arr[]={20,30,10,5,15};
    int n=5;
    printPrevGreater(arr,n);
    return 0; 
}