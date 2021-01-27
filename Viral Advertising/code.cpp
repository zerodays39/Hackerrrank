
#include <bits/stdc++.h>

using namespace std;

//user code

int viralAdvertising(int n)
 {
     int p=5,l=0,tl=0;
     
     for(int i=0;i<n;i++)
     {
         l= p/2;
        tl=tl+l;
         p= l*3;
         
     }
     return tl;
}


//user code



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = viralAdvertising(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
