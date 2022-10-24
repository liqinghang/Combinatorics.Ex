#include <iostream>
#include <vector>
using namespace std;

const int tableSize = 67;
vector<vector<long long>> combinTable(tableSize, vector<long long>(tableSize, 0));
void buildCombinTable() {
    for(int i = 1; i < tableSize; ++ i) {
        combinTable[i][i] = combinTable[i][0] = 1;
    }
    for(int i = 2; i < tableSize; ++ i) {
        for(int j = i/2; j > 0; -- j) {
            combinTable[i][j] = combinTable[i-1][j-1] + combinTable[i-1][j];
   combinTable[i][i-j] = combinTable[i][j];
        }
    }
}
long long getCombin(int n, int m) {
    return combinTable[n][m];
}

int main() {
    buildCombinTable();
    int n = 10;
    printf("\t");
    for(int i = 0; i <= n; ++ i) {
        printf("%d\t", i);
    }
    printf("\n");
    for(int i = 0; i <= n; ++ i) {
        printf("%d\t", i);
        for(int j = 0; j <= i; ++ j) {
            printf("%lld\t", combinTable[i][j]);
        }
        printf("\n");
    }
    return 0;
}