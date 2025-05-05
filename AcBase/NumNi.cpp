#include <bits/stdc++.h>


long long MergeSort(std::vector<int>& a, std::vector<int>& b, int l, int r) {
    if (l >= r) return 0;
    int mid = (l + r) >> 1;
    long long ans = MergeSort(a, b, l, mid) + MergeSort(a, b, mid + 1, r);

    int i = l, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) b[k ++] = a[i ++];
        else {

            b[k ++] = a[j ++];
            ans += mid - i + 1;
        } 
    }
    while (i <= mid) b[k ++] = a[i ++];
    while (j <= r) b[k ++] = a[j ++];
    k = 0;
    for (int i = l; i <= r; i ++) a[i] = b[k ++];
    return ans;
}
int main() {


    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    for (int i = 0; i < n; i ++) std::cin >> a[i];
    std::cout << MergeSort(a, b, 0, n - 1) << std::endl;
    return 0;
}