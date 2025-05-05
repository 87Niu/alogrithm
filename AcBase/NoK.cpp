#include <bits/stdc++.h>


int quickSort(std::vector<int>& a, int l, int r, int k) {

    if (l >= r) return a[l];
    int x = a[(l + r) >> 1];
    int i = l - 1, j = r + 1;
    while (i < j) {
        do i ++; while (a[i] < x);
        do j --; while (a[j] > x);
        if (i < j) std::swap(a[i], a[j]);
    }
    int sl = j - l + 1;
    if (sl >= k) return quickSort(a, l, j, k);
    else return quickSort(a, j + 1, r, k - sl);
}
int main() {


    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);

    for (int i = 0; i < n; i ++) std::cin >> a[i]; 

    std::cout << quickSort(a, 0, n - 1, k) << std::endl;
    return 0;
}