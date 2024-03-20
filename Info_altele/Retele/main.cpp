#include <bits/stdc++.h>
using namespace std;
ifstream fin("retele.in");
ofstream fout("retele.out");

int n, m, nrcomp;
vector<int> gr[50005], g[50005], ans[50005];
stack<int> st;
bool viz[50005];

void dfs1(int nod) {
    viz[nod] = true;
    for (int i = 0; i < gr[nod].size(); i++) {
        int vecin = gr[nod][i];
        if (!viz[vecin])
            dfs1(vecin);
    }
    st.push(nod);
}

void dfs2(int nod) {
    viz[nod] = false;
    for (int i = 0; i < g[nod].size(); i++) {
        int vecin = g[nod][i];
        if (viz[vecin])
            dfs1(vecin);
    }
    ans[nrcomp].push_back(nod);
}

void rezolve() {
    for (int i = 1; i <= n; i++)
        if (!viz[i])
            dfs1(i);

    while (!st.empty()) {
        int vecin = st.top();
        if (viz[vecin]) {
            dfs2(vecin);
            nrcomp++;
        }
        st.pop();
    }

    fout << nrcomp << "\n";
    for (int i = 0; i < nrcomp; i++)
        sort(ans[i].begin(), ans[i].end());

    sort(ans, ans + nrcomp);
    for (int i = 0; i <  nrcomp; i++) {
        fout << ans[i].size() << " ";
        for (int j = 0; j < ans[i].size(); j++)
            fout << ans[i][j] << " ";
        fout << "\n";
    }
}

int main() {
    fin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int x, y;
        fin >> x >> y;
        gr[x].push_back(y);
        g[y].push_back(x);
    }
    rezolve();
}

