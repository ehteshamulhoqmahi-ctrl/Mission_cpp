#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool happy_alex = false;
    for (int i = 0; i < n; i++) {
        int price, quality;
        cin >> price >> quality;
        
        if (price != quality) {
            happy_alex = true;
        }
    }
    
    if (happy_alex) {
        cout << "Happy Alex\n";
    } else {
        cout << "Poor Alex\n";
    }
    
    return 0;
}