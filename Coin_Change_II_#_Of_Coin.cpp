#include <bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
#define ll long long
#define ull unsigned long long
#define readi(x) int x; cin>>x
#define readll(x) ll x; cin>>x
#define reads(s) string s; cin>>s
#define rep(i,a,b) for(ll i=a;i<b;++i)
#define all(x) (x).begin(), (x).end()
#define vprint(arr) for(auto &i:arr) cout<<i<<" "
#define print(num) cout<<num<<"\n";
#define N 1e6
#define mod 1e9+7
#define inf (1LL<<60)
#define vll vector<ll >
#define vi vector<int >
#define vii vector<vi >
#define vb vector<bool >
#define pb push_back

long long int count( int S[], int m, int n )
    {
       int t[m+1][n+1];
        for(int i=0;i<m+1;++i) {
            for(int j=0;j<n+1;++j) {
                if(j==0) 
                    t[i][j]=0;
                if(i==0) 
                    t[i][j]=INT_MAX-1;
            }
        }

        for(int i=1;i<n+1;++i) {
            if(i%S[0]==0) 
                t[1][i]=i/S[0];
            else 
                t[1][i]=INT_MAX-1;
        }

        for(int i=2;i<m+1;++i) {
            for(int j=1;j<n+1;++j) {
                if(S[i-1]<=j) {
                    t[i][j]=min(t[i][j-S[i-1]]+1,t[i-1][j]);
                }
                else {
                    t[i][j]=t[i-1][j];
                }
            }
        }


        for(int i=0;i<m+1;++i) {
            for(int j=0;j<n+1;++j) {
                cout<<t[i][j]<<' ';
            }
            cout<<endl;
        }


        return t[m][n];
    }

int main() {
	fast_io;

	return 0;
}
