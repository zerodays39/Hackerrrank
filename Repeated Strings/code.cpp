#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long cnt=0,cnt1=0;
    int n1=s.size();
    for(int i=0;i<n1;i++)
    {
        if(s[i]=='a')
        cnt++;
    }
    long int p = n/n1;
    cnt1= cnt1 + p*cnt;
    if(n%n1!=0)
    {
        
        for(int i=0;i<n%n1;i++)
        {
            if(s[i]=='a')
            cnt1++;
        }
    }
return cnt1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
