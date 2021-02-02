#include <bits/stdc++.h>

using namespace std;


int findDigits(int n) {
    
     int tmp = n,cnt = 0;
        while(tmp!=0){
            int r = tmp % 10;
            if(r !=0 && n%r == 0)cnt++;
            tmp/=10;
        }

return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
