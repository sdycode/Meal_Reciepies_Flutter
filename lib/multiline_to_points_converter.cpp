
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string line;
vector<string> v;
string s;

while(std::getline(cin, line)){
    if (line.empty()){
        break;
    }
    s= "\'"+line+"\',";
    v.push_back(s);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

    return 0;
}
