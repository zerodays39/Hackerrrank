#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


//user code;

void plusMinus(vector<int> arr) 
{
float n=0,p=0,z=0;
int l=arr.size();
for(int i=0;i<l;i++)
{
    if(arr[i]>0)
    p++;
    else if(arr[i]<0)
    n++;
    else
    {
        z++;
    }
}
cout<<setprecision(5)<<p/l<<endl;
cout<<setprecision(5)<<n/l<<endl;
cout<<setprecision(5)<<z/l<<endl;


}

//user code;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
