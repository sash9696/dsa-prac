#include <iostream>
using namespace std;

//lowercase letters

int main(){

    string s;

    cin >> s;

    cout<<s<<endl;

    //precompute
    int hash[26] = {0};


    for (int i = 0; i < s.size(); i++){
            hash[s[i] - 'a'] ++;

    }

    int q;
    cin >> q;

    while(q--){
        char ch;
        cin >> ch;

        //fetch

        cout << hash[ch - 'a'] << endl;

    }

    

    return 0;
}