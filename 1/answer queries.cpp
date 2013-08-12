#include <iostream>
using namespace std;
#define MAX 50001
static int init[MAX];

int query(int& start, int& end)
{
    int max = init[start];
    int tmp = init[start];
    for(int i = start+1; i <= end; ++i) {
        if(tmp >= 0) {
            tmp += init[i];
        } else {
            tmp = init[i];
        }        
        if(tmp > max) {
            max = tmp; 
        }
    }
    return max;
}

int main()
{
    int n = 0;
    cin >> n;
    int tmp;
    for(int i = 1; i <= n; ++i) {
        cin >> tmp;
        init[i] = tmp;
    }

    int m = 0;
    cin >> m;
    int start, end;
    for(int i = 0; i < m; ++i) {
        cin >> start >> end;
        printf("%d\n", query(start, end));
    }
    return 0;
}
