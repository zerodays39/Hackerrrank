#include <bits/stdc++.h>

using namespace std;

//user code

int formingMagicSquare(vector<vector<int>> s) {
    int magic_square[8][3][3] = {
        {{8,1,6},{3,5,7},{4,9,2}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,7,6},{9,5,1},{4,3,8}}
    };
    int result = INT_MAX;
    for(int i =0; i<8; i++)
    {
        int curr = 0;
        for(int j = 0; j<3; j++)
        {
            for(int k = 0; k<3; k++)
            {
                curr+=abs(magic_square[i][j][k]-s[j][k]);
            }
        }
        result = min(result, curr);
    }
    return result;


}


//user code

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
