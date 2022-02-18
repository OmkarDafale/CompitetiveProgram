#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    string s = "omkardafale";
    int numRows = 3;
     if (numRows == 1) cout<<s;

        vector<string> rows(min(numRows, int(s.size())));
        int curRow = 0;
        bool goingDown = false;

        for (char c : s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }

        string ret;
        for (string row : rows) ret += row;
        cout<<ret;
    return 0;
}