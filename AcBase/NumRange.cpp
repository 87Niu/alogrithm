#include <bits/stdc++.h>

int main() {

    int n, q;
    std::cin >> n >> q;

    std::vector<int> a(n);

    for (int i = 0; i < n; i ++) {
        std::cin >> a[i];
    }

    while (q --) {
        int k;
        std::cin >> k;
        int l = 0, r = n - 1;
        while (l < r) {
            int mid = (l + r) >> 1;
            if (a[mid] >= k) r = mid;
            else l = mid + 1;
        }
        if (a[l] != k) {
            std::cout << "-1 -1" << std::endl;
            continue;
        }
        std::cout << l << ' ';
        l = 0, r = n - 1;
        while (l < r) {
            int mid = (l + r + 1) >> 1;
            if (a[mid] <= k) l = mid;
            else r = mid - 1;
        }
        std::cout << l << std::endl;
    }
    return 0;
}