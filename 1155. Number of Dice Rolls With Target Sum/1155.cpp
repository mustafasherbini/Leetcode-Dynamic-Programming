#include <bits/stdc++.h>
//#include <atcoder/all>
#define f first
#define s second


# define  FAST()    ios_base::sync_with_stdio(false); cin.tie(NULL);
#define IN()  freopen("collectingofficer.in", "r", stdin);
#define OUT() freopen("output.txt", "w", stdout) ;
/*
                                  وَمَا تَوْفِيقِي إِلَّا بِاللَّهِ
*/
using namespace std;
using ll = long long ;
using ld = long double ;
const int N = 2e5+7 , M = 1e9+7;
const double  ES = 1e-6;
using vi = deque<int>;
template<class T> using min_heap = priority_queue<T, std::vector<T>, std::greater<T>>;


int dx[] = {0, 0, 1, -1, 1, -1, 1, -1}, dx4[] = {1, 0 , 0 , -1};
int dy[] = {1, -1, 0, 0, 1, -1, -1, 1}, dy4[] = {0, 1, -1 ,0 };


/*Remind pleaseeeee
 * can brute force ? can brute force for specific size ? pleasee ?
 * sum or mult over flow????????
 *
 *
 */


int dp[35][1005];
int mod=1e9+7;
int numRollsToTarget(int n, int k, int target) {

    dp[0][0]=1;
    for (int i = 1; i <=n ; ++i) {
        for (int j = 1; j <=k ; ++j) {

            for (int l = target; l >=j ; --l) {
                if(dp[i-1][l-j]!=0)dp[i][l]+=dp[i-1][l-j];
                dp[i][l]%=mod;
            }
        }

    }

    return dp[n][target];
}


void solve() {

}

int main(){
//    IN();
    FAST()
    int t=1;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }


    return 0;
}
