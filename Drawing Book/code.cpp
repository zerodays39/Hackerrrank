
#include <bits/stdc++.h>

using namespace std;


//user code


int pageCount(int n, int p) {
    /*
     * Write your code here.
     */
     int turnl=0,turnf=0;
     for(int i=1;i<=n;i=i+2)
     {
         if(p>i)
         {
             turnf++;
         }
         else if(p<=i)
         break;
     }
for(int i=n;i>=1;i=i-2)
     {
         if(n%2==0){
         if(p<i)
         {
             turnl++;
         }
         else if(p<=i)
         break;
     }
     else if(n%2!=0)
     {
         if(p<i-1)
         {
             turnl++;
         }
         else if(p<=i)
         break;
     }
     }
     
     return min(turnl,turnf);
}


//user code



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
