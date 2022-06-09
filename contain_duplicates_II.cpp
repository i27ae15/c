#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> l{1,2,3,1};
    std::sort( l.begin(), l.end() );
    for (int i = 1; i < l.size(); i++){
        if (l.at(i) == l.at(i - 1)) {
            cout << true;  
            break;              
        }
    }
    
    cout << false;
}


// Notes from comments

class Solution {
public:
    bool containsDuplicate(vector<int>& n) {
        set<int>s(n.begin(),n.end());
        return s.size()!=n.size();
    }
};