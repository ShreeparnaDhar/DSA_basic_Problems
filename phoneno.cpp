#include<bits/stdc++.h>
using namespace std;

string getPhoneNumber( string s ){
    string nums[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    string ans = "";
    int n = s.length();
    for( int i = 0; i < n; ){
        int count = 0;
        for( int j = i; j < min( n, i + 3 ); ++j ){
            if( s[i] == s[j] ){
                ++count;
            }
        }
        if( count == 1 ){
            ans += nums[ s[i] - 48 ];
            i += 1;
        }else if( count == 2 ){
            ans += "double ";
            ans += nums[ s[i] - 48 ];
            i += 2;
        }else if( count == 3 ){
            ans += "triple ";
            ans += nums[ s[i] - 48 ];
            i += 3;
        }
        
        if( i != n ){
            ans += " ";
        }
    }
    return ans;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = getPhoneNumber(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
