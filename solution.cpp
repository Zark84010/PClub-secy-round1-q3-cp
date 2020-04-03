#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long

int n, m, q;
vector<int> tree, a;

// Works in O(log(max(x, y))) time since __gcd(x, y) works in O(log(max(x, y))) time
int lcm(int x, int y) {
    return (x*y) / __gcd(x, y);
}

// Works in O(n * log(max_a[i])) time
void build(int node, int start, int end) {
    if(start == end) tree[node] = a[start];
    else {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
        tree[node] = __gcd(tree[2*node], tree[2*node+1]);
    }
}

// Works in O(log(n) * log(max_a[i])) time
void update(int node, int start, int end, int idx, int val) {
    if(start == end) {
        a[idx] = val;
        tree[node] = val;
    }
    else {
        int mid = (start + end) / 2;
        if(start <= idx && idx <= mid) update(2*node, start, mid, idx, val);
        else update(2*node+1, mid+1, end, idx, val);
        tree[node] = __gcd(tree[2*node], tree[2*node] + 1);
    }
}

// Works in O(log(n) * log(max_a[i])) time
int query(int node, int start, int end, int l, int r) {
    if(r < start || end < l) return -1;
    if(l <= start && end <= r) return tree[node];
    int mid = (start + end) / 2;
    int val1 = query(2*node, start, mid, l, r);
    int val2 = query(2*node+1, mid+1, end, l, r);
    if(val1 == -1) return val2;
    else if(val2 == -1) return val1;
    return __gcd(val1, val2);
}

// Total time complexity: O((n + q*log(n) + q*m) * log(max_a[i]))
int32_t main(int32_t argc, char** argv) {
    fastio;
    cin >> n >> m >> q;
    a = vector<int>(n);
    tree = vector<int>(4*n);    // we need tree[1] to tree[2*n-1]
    for(int i = 0; i < n; i++) cin >> a[i];
    build(1, 0, n-1);
    while(q--) {
        char ch;
        cin >> ch;
        if(ch == 'c') {
            int i, p;
            cin >> i >> p;
            update(1, 0, n-1, i-1, p);
        }
        else if(ch == 'f') {
            int l, r;
            cin >> l >> r;
            int val = query(1, 0, n-1, l-1, r-1);
            int mx = -1;
            for(int i = 1; i <= m; i++) mx = max({mx, lcm(val, i)});
            cout << mx << "\n";
        }
    }
    return 0;
}
