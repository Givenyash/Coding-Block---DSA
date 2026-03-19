#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Check if we can cook P parathas in given time
bool canCook(vector<int>& rank, int P, long long mid) {
    int totalParathas = 0;

    for (int i=0; i<rank.size(); i++) {
        int R = rank[i];
        int time = 0;
        int cooked = 1;

        // count how many parathas this cook can make
        while (time + R * cooked <= mid) {
            time += R * cooked;
            // if (time > mid) break;

            totalParathas++;
            cooked++;
        }

        if (totalParathas >= P)
            return true;
    }

    return false;
}

int main() {
    int P, L;
    cin >> P >> L;

    vector<int> rank(L);
    for (int i = 0; i < L; i++) {
        cin >> rank[i];
    }

    long long maxRank = *max_element(rank.begin(), rank.end());
    long long low = 0;
    long long high = maxRank*(P*(P+1)/2);
	long long ans =0;

    while (low <= high) {
        long long mid = low + (high-low) / 2;

        if (canCook(rank, P, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}
//input
// 10
// 4 
// 1 2 3 4

//output
//12