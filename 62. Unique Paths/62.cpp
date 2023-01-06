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


int dp[105][105];
int uniquePaths(int m, int n) {
    dp[m][n+1]=1;
    for (int i = m; i >=1 ; --i) {
        for (int j = n; j >=1 ; --j) {
            dp[i][j]+= dp[i][j+1]+ dp[i+1][j];
        }
    }
    return dp[1][1];
}


void solve() {
cout<<uniquePaths(3,7);


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
