long long getTrappedWater(long long* arr, int n) {
    int l = 0, r = n - 1;
    long long lMax = 0, rMax = 0;
    long long total = 0;

    while (l < r) {
        if (arr[l] <= arr[r]) {
            if (arr[l] < lMax) {
                total += lMax - arr[l];
            } else {
                lMax = arr[l];
            }
            l++;
        } else {
            if (arr[r] < rMax) {
                total += rMax - arr[r];
            } else {
                rMax = arr[r];
            }
            r--;
        }
    }
    return total;
}
