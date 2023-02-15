//
// Created by Petr on 15/02/2023.
//

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int dH = 0, dM = 0, dS = 0, bH, bM, bS, ansH, ansM, ansS;
    bool carryM = false, carryS = false;
    string A, B, C;
    cin >> A >> B >> C;

    dS += (stoi(C.substr(6)) - stoi(A.substr(6)));
    if (dS < 0) {
        dM--;
        dS += 60;
    }

    dM += (stoi(C.substr(3, 2)) - stoi(A.substr(3, 2)));
    if (dM < 0) {
        dH--;
        dM += 60;
    }

    dH += (stoi(C.substr(0, 2)) - stoi(A.substr(0, 2)));
    if (dH < 0) dH += 24;

    if (dH & 1) dM += 60;
    dH /= 2;

    if (dM & 1) dS += 60;
    dM /= 2;

    dS = dS & 1 ? (dS + 1) / 2 : dS / 2;


    bH = stoi(B.substr(0, 2));
    bM = stoi(B.substr(3, 2));
    bS = stoi(B.substr(6));

    // Calculate seconds
    ansS = (bS + dS) % 60;
    if (bS + dS >= 60) carryS = true;

    // Calculate minutes
    ansM = (bM + dM + carryS) % 60;
    if (bM + dM + carryS >= 60) carryM = true;

    // Calculate hours
    ansH = (bH + dH + carryM) % 24;

    printf("%02d:%02d:%02d\n", ansH, ansM, ansS);
}

int main() {
    solve();
}