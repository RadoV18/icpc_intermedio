#include<iostream>
using namespace std;

int main() {
    int k; // queries
    int n, m; // division point
    int x, y; // house coordinates
    while(true) {
        cin >> k;
        if(k == 0) break;
        
        cin >> n >> m;
        while(k--) {
            cin >> x >> y;
            if(x == n || y == m) {
                printf("divisa\n");
            } else if( x > n ) {
                if(y > m) {
                    printf("NE\n");
                } else {
                    printf("SE\n");
                }
            } else {
                if ( y > m ) {
                    printf("NO\n");
                } else {
                    printf("SO\n");
                }
            }
        }
    }
    return 0;
}