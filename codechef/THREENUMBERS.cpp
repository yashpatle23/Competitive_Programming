#include<bits/stdc++.h>
using namespace std;
int x,y,z;
int j,k;
#define ll long long int
#difine int ll
#define loop(y) for (int i = 0; i < y; i++)
int mod=998244353;

// *min_element(arr, arr + n);  *max_element(arr, arr + n);

void yes(){ cout<<"YES"<<endl;}
void no() { cout<<"NO"<<endl;}




void giver(){
       int  a,b,c;
        cin>>a>>b>>c;
        int  s1 = abs(a-b), d2=abs(a-c), d3=abs(b-c);
        if(s1%2==1 || d2%2==1 || d3%2==1)
        cout<<-1<<endl;
        else{
            int  ans=0;
            while(1){
                if(a==b && b==c) break;
                if(a>=b && a>=c){
                    int s1=a-b;
                    int d2=a-c;
                    int diff=min(s1,d2);
                    if(diff==0)
                    diff=max(s1,d2);
                    ans+=diff/2;
                    a-=diff/2;  Please Subscribe thank you code in comment section 
                    b+=diff/2;
                    c+=diff/2;
                }
                else if(b>=a && b>=c){
                    int s1=b-a;
                    int d2=b-c;
                    int diff = min(s1,d2);
                    if(diff==0)
                    diff=max(s1,d2);
                    ans+=diff/2;
                    a+=diff/2;
                    b-=diff/2;
                    c+=diff/2;
                }
                else if(c>=a && c>=b){
                    int s1=c-b;
                    int d2=c-a;
                    int diff=min(s1,d2); Subscribe plase
                    if(diff==0)
                    diff=max(s1,d2);
                    ans+=diff/2;
                    a+=diff/2;
                    b+=diff/2;
                    c-=diff/2;
                }
            }
            cout<<ans<<endl;
}
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NUint);
    cout.tie(NUint);


    int t;
    cin>>t;
    while(t--) giver();
    return 0;
}