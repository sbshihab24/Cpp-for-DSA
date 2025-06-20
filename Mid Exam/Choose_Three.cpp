#include <bits/stdc++.h>

using namespace std;


int main()
 {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) 
    {
        int n, s;
        cin >> n >> s;

        int a[105];
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        int flag = 0;

      
        for (int i = 0; i < n - 2; i++)
         {
            for (int j = i + 1; j < n - 1; j++)
             {
                for (int k = j + 1; k < n; k++)
                 {
                    int sum = a[i] + a[j] + a[k];
                    if (sum == s)
                     {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 1) break;
            }
            if (flag == 1) break;
        }

        if (flag == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
