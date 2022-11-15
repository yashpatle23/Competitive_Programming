#include<iostream>
#include<stdio.h>
#include<bit
#include<string.h>
using namespace std;

int main (){
    int num;
    cin>> num;
    for(int tem=0; tem<num; tem++){
       int i,j,n,a=0,b=0;
        cin >> n;
         string s;
         cin >> s;
       for(i=0;i<n;i++){
            if(s[i] == '0')a++;
            else b++;
       }
        if(a%2 == 0 || b%2 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
