#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t, d, n;
    cin >> t >> d >> n;

    vector<long long> specialPoints(n);
    for (int i = 0; i < n; i++) {
        cin >> specialPoints[i];
    }

    specialPoints.push_back(d); // Add the end point as a special point

    sort(specialPoints.begin(), specialPoints.end());

    double ethanPosition = 0.0;
    double ilsaPosition = d * 1.0;
    double ethanSpeed = 1.0;
    double ilsaSpeed = 1.0;
    double time = 0.0;

    for (int i = 0; i < specialPoints.size(); i++) {
        // Calculate the time to reach the special point for both Ethan and Ilsa
        double ethanTime = (specialPoints[i] - ethanPosition) / ethanSpeed;
        double ilsaTime = (ilsaPosition - specialPoints[i]) / ilsaSpeed;

        // Find the minimum time among Ethan and Ilsa
        double minTime = min(ethanTime, ilsaTime);

        // Update their positions and speeds
        ethanPosition += ethanSpeed * minTime;
        ilsaPosition -= ilsaSpeed * minTime;
        time += minTime;

        // Check if they meet
        if (ethanPosition == ilsaPosition) {
            if (time <= t) {
                cout << "YES" << endl;
                return 0;
            }
        }

        // Increase their speeds after passing a special point
        ethanSpeed++;
        ilsaSpeed++;
    }

    cout << "NO" << endl;
    return 0;
}
