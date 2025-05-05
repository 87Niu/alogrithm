#include <bits/stdc++.h>


void quickSort(std::vector<int>& a, int l, int r) {
    if (l >= r) return ;
    int i = l - 1, j = r + 1;
    int x = a[(l + r) >> 1];
    while (i < j) {
        do i ++; while (a[i] < x);
        do j --; while (a[j] > x);
        if (i < j) std::swap(a[i], a[j]);
    }
    quickSort(a, l, j);
    quickSort(a, j + 1, r);
}
int main() {

    int n;
    std::cin >> n;
    std::vector<int> a(n + 1);
    for (int i = 0; i < n; i ++) std::cin >> a[i];
    quickSort(a, 0, n - 1);
    for (int i = 0; i < n; i ++) std::cout << a[i] << ' ';
    return 0;
}