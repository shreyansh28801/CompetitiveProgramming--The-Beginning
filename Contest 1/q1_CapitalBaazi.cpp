#include <bits/stdc++.h>
using namespace std;
void smallToUpperWord(string s){
    string s1;
    for (int i = 0; i < s.size(); i++)
    {
        s1.push_back(s[i]-'a'+'A');
    }
    cout<<s1<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    // cin.ignore();

    getline(cin, s);
   
    while (s.size()>0)
    {
        // cout<<"fjkkj\n";
        size_t found = s.find(' ');
        if (found != string::npos)
        {
            string s2(s,0,found);
            smallToUpperWord(s2);
            s.erase(s.begin(),s.begin()+found+1);
        }
        else{
            smallToUpperWord(s);
            s="";
        }
        // cout << "first 'needle' found at: " << found << '\n';
    }

    return 0;
}