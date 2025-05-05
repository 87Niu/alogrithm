#include <bits/stdc++.h>


void mergeSort(std::vector<int>& a, std::vector<int>& b, int l, int r) {
    if (l >= r) return ;
    int mid = (l + r) >> 1;
    mergeSort(a, b, l, mid);
    mergeSort(a, b, mid + 1, r);
    int i = l, j = mid + 1;
    int k = 0;
    while (i <= mid && j <= r) {
        if (a[i] <= a[j]) b[k ++] = a[i ++];
        else b[k ++] = a[j ++];
    }
    while (i <= mid) b[k ++] = a[i ++];
    while (j <= r) b[k ++] = a[j ++];

    k = 0;
    for (int i = l; i <= r; i ++) {
        a[i] = b[k ++];
    }

}
int main() {

    int n;
    std::cin >> n;
    std::vector<int> a(n + 1), b(n + 1);
    for (int i = 0; i < n; i ++) std::cin >> a[i];
    mergeSort(a, b, 0, n - 1);
    for (int i = 0; i < n; i ++) std::cout << a[i] << ' ';
    return 0;
}