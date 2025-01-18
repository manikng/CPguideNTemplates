#include<bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline "\n"
#define pb push_back

int findPeri(int para, int steps, int len) {
    int a = 0, b = 0, p1 = 0, p2 = 0;
    for (size_t i = 0; i < steps; i++) {
        int x, y;
        cout<<"enter the cordinates: ";
        cin >> x >> y;
        a += x;
        b += y;
        if (i != 0) {
            para += 2 * (abs(p1 - a) + abs(p2 - b));
        }
        p1 = a;
        p2 = b;
    }
    para += 4 * len;
    return para;
}

int main(){
	// fastio();
//     #ifndef ONLINE_JUDGE
// 	freopen("Input.txt", "r", stdin);
// 	freopen("Output.txt", "w", stdout);
// 	freopen("Error.txt", "w", stderr);
// #endif
    vector<int> ans;

    int testcases;
    cout<<"entertestcase: ";
    cin>>testcases;
    for (size_t i = 0; i < testcases; i++)
    {
        int perimeter = 0;
        int steps,len;
        cout<<"enter steps and len :";
        cin>>steps >> len;
        ans.pb(findPeri(perimeter,steps,len));
    }
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<"\n";
    }
    

    return 0;
}