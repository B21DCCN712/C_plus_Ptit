#include<bits/stdc++.h> 
using namespace std; 


int main()
{
    int n;
    cin >> n;
    int a[n][n], ans = 0;
    for(int i=0 ; i<n ; i++) for(int j=0 ; j<n ; j++) cin >> a[i][j];
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            int x = 0, y = 0, k = 0;
            while(k <= i && k <= j && i + k < n && j + k < n)
            {
                x += a[i - k][j - k] + a[i + k][j + k];
                y += a[i - k][j + k] + a[i + k][j - k];
                ans = max(ans, x - y);
                ++k;
            }
            x = 0;
            y = 0;
            k = 0;
            while(k <= i && k <= j && i + k + 1 < n && j + k + 1 < n)
            {
                x += a[i - k][j - k] + a[i + k + 1][j + k + 1];
                y += a[i - k][j + k + 1] + a[i + k + 1][j - k];
                ans = max(ans, x - y);
                ++k;
            }
        }
    }
    cout << ans;
    return 0;
}
