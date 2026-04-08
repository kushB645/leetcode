class Solution {
public:
    class pair {
    public:
        int p_js;
        int p_jl;

        pair() {
            p_js = -1;
            p_jl = -1;
        }
    };

    pair binarysearch(int n, vector<int>& heaters) {
        int low = 0;
        int high = heaters.size() - 1;
        pair p;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (heaters[mid] == n) {
                p.p_js = heaters[mid];
                p.p_jl = heaters[mid];
                return p;
            } else if (heaters[mid] < n) {
                p.p_js = heaters[mid];
                low = mid + 1;
            } else {
                p.p_jl = heaters[mid];
                high = mid - 1;
            }
        }
        return p;
    }

int findRadius(vector<int>& houses, vector<int>& heaters) {
    sort(heaters.begin(), heaters.end());
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for (int i = 0; i < houses.size(); i++) {
        int hn = houses[i];
        pair p = binarysearch(hn, heaters);
        int di = (p.p_js == -1) ? INT_MAX : hn - p.p_js;
        int dj = (p.p_jl == -1) ? INT_MAX : p.p_jl - hn;

        mini = min(di, dj);

        maxi = max(maxi, mini);
    }
    return maxi;
}
};