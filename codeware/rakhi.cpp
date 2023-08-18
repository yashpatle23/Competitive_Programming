#include<bits/stdc++.h>
using namespace std;
int x,y,z;
#define ll long long int
#define int ll
int j,k;
#define loop(y) for (int i = 0; i < y; i++)
int mod=998244353;


void giver(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    //code starts from here
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    cin>>a>>b>>c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout<<floor(root1)<<" "<<floor(root2)<<endl;
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout<<floor(root1)<<" "<<floor(root2)<<endl;
    }
    else {
        cout<<"Imaginary";
    }



}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--) giver();
    return 0;
}