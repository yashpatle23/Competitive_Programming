#include<bits/stdc++.h>
using namespace std;

void ans(){
    int se;
    cin>>se;
    int book;
    cin>>book;
    if(2*se==5*book) cout<<"Either"<<endl;
    else if(2*se>5*book) cout<<"Chocolate"<<endl;
    else if(2*se<5*book) cout<<"Candy"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--) ans();
    return 0;
}