#include <bits/stdc++.h>


//#include <atcoder/all>
#define f first
#define s second
#include "map"
#include "set"

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




int dp[205][205];
int minPathSum(vector<vector<int>>& grid) {
    int n =grid.size(), m=grid.front().size();
    memset(dp,'?', sizeof(dp));
    dp[n-1][m]=0;
    for (int i = n-1; i >=0 ; --i) {
        for (int j = m-1; j >=0 ; --j) {
            dp[i][j]=grid[i][j]+ min(dp[i+1][j],dp[i][j+1]);
        }
    }
    return dp[0][0];
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
