
class Solution {
public:
    int count = 0;

    void merge(vector<int>& a, vector<int>& b, vector<int>& c) {
        int i = 0, j = 0, k = 0;

        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                c[k++] = a[i++];
            } else {
                c[k++] = b[j++];
            }
        }

        while (i < a.size()) c[k++] = a[i++];
        while (j < b.size()) c[k++] = b[j++];
    }

    int inversions(vector<int>& a, vector<int>& b) {
        int i = 0, j = 0, cnt = 0;
        int m = a.size(), n = b.size();

        while (i < m && j < n) {
            if ((long long)a[i] > 2LL * b[j]) {
                cnt += m - i;
                j++;
            } else {
                i++;
            }
        }

        return cnt;
    }

    void mergeSort(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return;

        vector<int> a(arr.begin(), arr.begin() + n / 2);
        vector<int> b(arr.begin() + n / 2, arr.end());

        mergeSort(a);
        mergeSort(b);

        count += inversions(a, b);
        merge(a, b, arr);
    }

    int reversePairs(vector<int>& nums) {
        count = 0;
        mergeSort(nums);
        return count;
    }
};
