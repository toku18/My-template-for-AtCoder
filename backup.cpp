#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
#define ll long long
#define lll __int128_t
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define dprep(i, n) for (int i = 1; i < (int)(n); i++)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pqi_big priority_queue<int>
#define pqi_small priority_queue<int, vector<int>, greater<int>>
#define pql_big priority_queue<ll>
#define pql_small priority_queue<ll, vector<ll>, greater<ll>>
#define vi vector<int>
#define vvi vector<vi>
#define vd vector<double>
#define vvd vector<vd>
#define vl vector<ll>
#define vvl vector<vl>
#define vb vector<bool>
#define vvb vector<vb>
#define vc vector<char>
#define vvc vector<vc>
#define vs vector<string>
#define dl double long
#define vdl vector<dl>
#define vvdl vector<vdl>
#define pi pair<int, int>
#define pl pair<ll, ll>
#define si set<int>
#define sl set<ll>
#define dqi deque<int>
#define dql deque<ll>
#define qi queue<int>
#define ql queue<ll>
#define mi map<int, int>
#define ml map<ll, ll>
#define msi multiset<int>
#define msl multiset<ll>
#define yes cout << "Yes" << "\n"
#define no cout << "No"  << "\n"
#define yesno(a) cout<<((a)?"Yes\n":"No\n")
#define cout_fs(x) cout<<fixed<<setprecision(x)
#define pb push_back
const vector<pair<int, int>> move4 = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };
const vector<pair<int, int>> move8 = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} , {-1, -1}, {-1, 1}, {1, -1}, {1, 1} };
const int inf = (int)2e9 + 10;
const ll INF = (ll)2e18 + 10;
const int MOD = 1000000007;
const int mod = 998244353;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
//計算途中の値の範囲がintをこえうるなら、計算をなす数値の最低でも一つはllじゃないといけない->もう全部llにしよう
//例見る前の直感を大切に
//困難は分割せよ（まとめて考えるな）
//set sは s.lower_bound(key)が使える
//BFSでは範囲外じゃないか、訪れていないか、条件を満たすかどうかを考えて、大丈夫ならば処理をする(訪れたことにする).別に他始点でもいい
//重みがある場合は、コストが最小になるなら、そこにもう一度訪れて良い
//prev(it, 1)はOK、it - 1はNG　it--はイテレータを一個前に変更する(it != begin())
//例だけで考えて適当な一般化したら間違える
//DFSは一定の深さまで行ったらreturn.常に深さの指標をもつ、すでに訪れていないかも考える
//一方を全探索しながらもう一方を高速な方法で計算するという考え方が全く身についてない(ABC474 E, ABC 476 D)
//引いたり足したりしたあとの添字を使う場合はコーナーケース注意しろ！
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
//(読む->考える(なにを持っていればすぐ答えられる？何を探索すればいい？どんな手法を取ればいい？))->やりたいことをイメージ化したものを書く！
//->正しいかどうか吟味する->コードに落とす->コードをチェックする->サンプルに通す(手元で動かす)
//※サンプルだけ通って合ってる気にならないこと！なんとなくで書いたコードが通る方が稀
//- - - - - - - - - - - - - - - - - - - - - - - - - - -
void solve() {
	
}
int main() {
	cin.tie(nullptr);
	ios_base::sync_with_stdio(false);
	cout_fs(15);
	int TESTCASES = 1;
	//cin >> TESTCASES;
	while(TESTCASES--) solve();
	cout << '\n';
	return 0;
}
