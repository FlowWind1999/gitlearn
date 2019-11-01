#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> apples;
	for(int i=0;i!=10;++i){
		int temp;
		cin>>temp;
		apples.push_back(temp);
	}
	int high;
	cin>>high;
	high+=30;
	sort(apples.begin(),apples.end());
	int count=0;
	
	cout<<count;
	return 0;
}
