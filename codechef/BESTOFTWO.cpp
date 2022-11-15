#include<iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	for(int irt=0;irt<num;irt++){
		int x,y;
		cin>>x>>y;
		cout<<max(x,y)<<endl;
	}
	return 0;
}