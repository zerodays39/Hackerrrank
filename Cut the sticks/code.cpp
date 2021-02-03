#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cutTheSticks function below.
vector<int> cutTheSticks(vector<int> arr) {
    int n=arr.size();
    vector <int> cs;
    cs.push_back(n);
   
    for(int i=0;;)
    {
        int min = *min_element(arr.begin(), arr.end()); 
        sort(arr.begin(), arr.end(),greater<int>());
        for(auto j=arr.rbegin();j!=arr.rend();++j)
        {
            if(*j==min)
            arr.pop_back();
            else
            *j=*j-min;
        }
        int s = arr.size();
        if(s==0)
        break;
        else
        cs.push_back(s);
    }
    return cs;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

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

    vector<int> result = cutTheSticks(arr);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

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
