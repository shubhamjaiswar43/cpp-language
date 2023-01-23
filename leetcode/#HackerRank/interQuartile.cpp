#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
6
6 12 8 10 20 16
5 6 7 8 9 10
5
10 40 30 50 20
1 2 3 4 5
10 20 20 20 20 20 30 30 30 40 40 50 50 50 50
 * Complete the 'interQuartile' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY values
 *  2. INTEGER_ARRAY freqs
 */

void interQuartile(vector<int> values, vector<int> freqs)
{
    vector<int> S;
    for (int i = 0; i < values.size(); i++)
    {
        for (int j = 0; j < freqs[i]; j++)
        {
            S.push_back(values[i]);
        }
    }
    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < S.size(); i++)
    {
        for (int j = i + 1; j < S.size(); j++)
        {
            if (S[i] > S[j])
            {
                int temp = S[i];
                S[i] = S[j];
                S[j] = temp;
            }
        }
    }

    for (int i = 0; i < S.size(); i++)
    {
        cout << S[i] << " ";
    }
    cout << endl;

    float q1, q3;
    if (S.size() % 2)
    {
        int half = (S.size() / 2);
        if (half % 2)
        {
            cout<<"half : "<<half<<" half + (int)(half / 2)"<<(half + (int)(half / 2))<<" S[half + (int)(half / 2)] = "<<S[half + (int)(half / 2)]<<endl;
            q1 = S[half / 2];
            q3 = S[half + (int)(half / 2)];
        }
        else
        {
            q1 = (S[half / 2] + S[(half / 2) - 1]) / (float)2;
            q3 = (S[half + (half / 2)] + S[half - 1 + (half / 2)]) / (float)2;
        }
    }

    else
    {
        int half = (S.size() / 2);
        if (half % 2)
        {
            q1 = S[half / 2];
            q3 = S[half + (half / 2)];
        }
        else
        {
            q1 = (S[half / 2] + S[(half / 2) - 1]) / (float)2;
            q3 = (S[half + (half / 2)] + S[half - 1 + (half / 2)]) / (float)2;
        }
    }
    cout<<"q1 = "<<q1<<" q3 = "<<q3<<endl;
    float ans;
    ans = abs(q3 - q1);
    cout << fixed << setprecision(1) << ans;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string val_temp_temp;
    getline(cin, val_temp_temp);

    vector<string> val_temp = split(rtrim(val_temp_temp));

    vector<int> val(n);

    for (int i = 0; i < n; i++)
    {
        int val_item = stoi(val_temp[i]);

        val[i] = val_item;
    }

    string freq_temp_temp;
    getline(cin, freq_temp_temp);

    vector<string> freq_temp = split(rtrim(freq_temp_temp));

    vector<int> freq(n);

    for (int i = 0; i < n; i++)
    {
        int freq_item = stoi(freq_temp[i]);

        freq[i] = freq_item;
    }

    interQuartile(val, freq);

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
