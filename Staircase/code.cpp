#include <bits/stdc++.h>

using namespace std;


//user code


void staircase(int n) {
 
   

  int s,w = 1,k;
    k = n-1;
    for(int i = 0; i < n; i++){
     s = k;
     for(int j = 0; j < s; j++)cout << " ";
     for(int m = 0; m < w; m++)cout << "#";
     cout << endl;
     k--;
     w++;

}
}



//user code



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
