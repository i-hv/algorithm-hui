#include<iostream>
#include<cstdio>
using namespace std;
int main() {
    int S[20], kase = 0, n;
    while (cin >> n && n) {
        kase++;
        for (int i = 0; i < n; i++)cin >> S[i];
        long long ans = 0;
        for (int i = 0; i < n; i++){
            long long v = 1;
            for (int j = i; j < n; j++){
                v *= S[j];
                if (v > ans) ans = v;
            }
        }
        printf("Case #%d: The maximum product is %lld.\n\n", kase, ans);
    }
    return 0;
}
