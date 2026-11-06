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
template<class T> inline ll connect(vector<T> &a, vector<T> b) {a.insert(a.end(), all(b)); return a.size();};
//ctrl+f で検索
//約数全列挙(√N)
vl enumdiv(ll enumdiv_n) {
	vl enumdiv_s;
	ll enumdiv_memo = sqrt(enumdiv_n);
	for(int i = 1; i <= enumdiv_memo; i++) {
		if(enumdiv_n % i == 0) {
			enumdiv_s.push_back(i);
			if(i * i != enumdiv_n) {
				enumdiv_s.push_back(enumdiv_n / i);
			}
		}
	}
	sort(all(enumdiv_s));
	return enumdiv_s;
}
//素数判定(√N)
bool is_prime(ll is_prime_n) {
	if(is_prime_n == 1) return false;
	else if(is_prime_n == 2) return true;
	else if(is_prime_n % 2 == 0) return false;
	ll is_prime_memo = sqrt(is_prime_n);
	for(int i = 3; i <= is_prime_memo; i++) {
		if(is_prime_n % i == 0) return false;
	}
	return true;
}
//エラストテネスの篩(NloglogN)
vb sieve(int sieve_n) {
	vb sieve_s(sieve_n + 1, true);
	sieve_s[0] = false;
	sieve_s[1] = false;
	int sieve_memo = sqrt(sieve_n);
	for(int sieve_i = 2; sieve_i <= sieve_memo; sieve_i++) {
		if(sieve_s[sieve_i] == true) {
			int sieve_memo1 = sieve_i * sieve_i;
			while(sieve_memo1 <= sieve_n) {
				sieve_s[sieve_memo1] = false;
				sieve_memo1 += sieve_i;
			}
		}
	}
	return sieve_s;
}
//繰り返し2乗法(logN)
ll ll_pow(ll ll_pow_a, ll ll_pow_b) {
	if(ll_pow_b == 0ll) return 1ll;
	ll ll_pow_memo = 1;
	int ll_pow_cnt = 0;
	while(ll_pow_memo * 2 <= ll_pow_b) {
		ll_pow_memo *= 2;
		ll_pow_cnt++;
	}
	ll ll_pow_res = ll_pow_a;
	while(ll_pow_cnt--) ll_pow_res = ll_pow_res * ll_pow_res;
	while(ll_pow_b-- - ll_pow_memo) {
		ll_pow_res *= ll_pow_a;
	}
	return ll_pow_res;
}
//ラムダ式sort(NlogN)
/*例:vector<pql_big>をtopをkeyにしてsortしたい
	vector<pql_big> que(n);
	//aが左側、bが右側でtrueのときそのまま。falseのとき値の入れ替え
	sort(que.begin(), que.end(), [](const pql_big& a, const pql_big &b) {
	//aが大きいときにtrueを出したい
	if (!a.empty() && !b.empty()) return a.top() > b.top();
	//bには要素があるので交換するためfalse
	else if (a.empty() && !b.empty()) return false;
	//aには要素があるのでそのままtrue
	else if (!a.empty() && b.empty()) return true;
	//等価（両方とも空）ならfalse
	return false;
	});
*/
//偏角ソート(NlogN)
void polar_sort(vector<pl> &polar_sort_vec) {
	sort(all(polar_sort_vec), [](const pl &polar_sort_a, const pl &polar_sort_b) {
		bool polar_sort_flag = (polar_sort_a.first >= 0 && polar_sort_a.second > 0) || (polar_sort_a.first < 0 && polar_sort_a.second >= 0);
		bool polar_sort_flag2 = (polar_sort_b.first >= 0 && polar_sort_b.second > 0) || (polar_sort_b.first < 0 && polar_sort_b.second >= 0);
		if(polar_sort_flag != polar_sort_flag2) {
			return polar_sort_flag;
		}
		else {
			ll polar_sort_cross = polar_sort_a.first * polar_sort_b.second - polar_sort_a.second * polar_sort_b.first;
			if(polar_sort_cross >= 0) return true;
			else return false;
		}
	});
}