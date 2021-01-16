    
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



//user code


vector<int> gradingStudents(vector<int> grades) {
    int n=grades.size();
    for(int i=0;i<n;i++)
    {
        if(grades[i]>=38)
        {
            int num= grades[i]%5;
            if(num>5)
            {
                if((10-num)<3 )
                {
                    grades[i]=grades[i]+(10-num);
                }
            }
            else if(num<5)
            {
                if((5-num)<3)
                {
                    grades[i]=grades[i]+(5-num);
                }
            }
            
        }
    }
return grades;
}




//user code



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string grades_count_temp;
    getline(cin, grades_count_temp);

    int grades_count = stoi(ltrim(rtrim(grades_count_temp)));

    vector<int> grades(grades_count);

    for (int i = 0; i < grades_count; i++) {
        string grades_item_temp;
        getline(cin, grades_item_temp);

        int grades_item = stoi(ltrim(rtrim(grades_item_temp)));

        grades[i] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

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

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
