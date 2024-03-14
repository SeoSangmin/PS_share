#include <iostream>
#include <cstring>
using namespace std;

int t, n, m;
int coin[21];

vector<int> answers;

void init();
void input();
void solve();
int main()
{
    init();
    solve();
    return 0;
}

void solve() {
    while (t--) {
        input();
        //solving..
    }
}

void input() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> coin[i];
    }
    cin >> m;
}

void init() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cin >> t;
    answers.resize(t);
}
