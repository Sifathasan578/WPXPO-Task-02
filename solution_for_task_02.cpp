#include<bits/stdc++.h>
using namespace std;

#define deb(n)       cout<<#n<<" = "<<n<<"\n";
#define keepLearning return 0;

int main() {
    int n;
    cin >> n;

    char t;
    cin >> t;

    if (t == '1') {
        int idx = 1, idxx = n, idx_2 = 2, idxx_2 = n - 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1) {
                    cout << idx++ << " ";
                }
                else if (i == n) {
                    cout << idxx-- << " ";
                }
                else if (j == 1) {
                    cout << idx_2++ << " ";
                }
                else if (j == n) {
                    cout << idxx_2-- << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }
    else {
        char idx = 'a', idxx = 'a' + (n - 1), idx_2 = 'b', idxx_2 = 'a' + (n - 2);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1) {
                    cout << idx++ << " ";
                }
                else if (i == n) {
                    cout << idxx-- << " ";
                }
                else if (j == 1) {
                    cout << idx_2++ << " ";
                }
                else if (j == n) {
                    cout << idxx_2-- << " ";
                }
                else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    }

    keepLearning
}
