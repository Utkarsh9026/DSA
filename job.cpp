#include<iostream>
#include <vector>
using namespace std;

int powerup(int N, int K, vector<int> &energyArr) {
  int energy = K;
    bool canWin = true;
    for (int i = 0; i < N; i++) {
        energy -= energyArr[i];
        if (energy < 0) {
            canWin = false;
            break;
        }
        if (energyArr[i] == 0) {
            energy += 1;
        }
    }
    if (canWin) {
        return 0; // Geek can win by starting from level 0
    }

    // Binary search for the maximum level to start from
    int low = 1;
    int high = N - 1;
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        energy = K;
        canWin = true;

        for (int i = mid; i < N; i++) {
            energy -= energyArr[i];
            if (energy < 0) {
                canWin = false;
                break;
            }
            if (energyArr[i] == 0) {
                energy += 1;
            }
        }

        if (canWin) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int N = 10;
    int K = 5;
    vector<int> energyArr = {4, 0, 3, 9, 2, 7, 0, 3, 1, 6};
    int result = powerup(N, K, energyArr);
    cout<<result;
    return 0;
}
