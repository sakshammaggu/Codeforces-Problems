#include<iostream>
using namespace std;

int main() {
    int w;
    cin>>w;
    
    if (w%2==0 && w!=2) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)