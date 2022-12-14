#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int i=0,j,k;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin>>t;
    int max= (2*t)-1;
    int start,end,p;
    int arr[max][max];
    start=0;
    end=max-1;
    p=1;
    while(end>=start){
        for(int x=start;start<end;start++) arr[start][x]=p;
        for(int x=start;start<end;start++) arr[x][start]=p;
        for(int x=start;start<end+1;start++) arr[end][x]=p;
        for(int x=start;start<end+1;start++) arr[x][end]=p;
        start=start+1;
        end=end-1;
        p=p+1;
    }

    for(int i=0;i<max;i++){
        for(int j=0;j<max;i++) cout<<arr[i][j]<<" ";
        cout<<endl; 
    }
    return 0;
}


/*
n = int(input())
m = 2*n-1
start = 0
end = m-1
p = n
res = [[0 for i in range(2*n-1)]for j in range(2*n-1)]
while end >= start:
  for j in range(start,end):
           res[start][j] = p

  for i in range(start,end):
           res[i][start] = p

  for j in range(start,end+1):
           res[end][j] = p

  for i in range(start,end+1):
           res[i][end] = p
  start = start+1
  end = end-1
  p = p-1



for i in range(2*n-1):
     for j in range(2*n-1):
         print(res[i][j],end = ' ')
     print()    */