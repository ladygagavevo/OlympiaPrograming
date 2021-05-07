#include<iostream>
#include<algorithm>

using namespace std;

int array [1024] = {};

bool myCmp ( int i, int j ) {
    return i>j;  
}

int main () {
    int N;
    cin >> N;
    while (N--) {
        int n;
        cin >> n;
        for (int i=0; i<n; i++) cin >> array [i];
        
        sort (array, array+n, myCmp);
        
        for (int i=0; i<n; i++) cout << array [i] << ' ';
        cout << '\n';
        
    }
}
