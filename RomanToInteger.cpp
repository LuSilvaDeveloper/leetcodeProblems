#include <iostream>
#include <unordered_map>
using namespace std;

class RomanToInteger
{
public:
    int romanToInt(string s) {
        int answer = 0;
        unordered_map<char,int> mymap;
        
        mymap['I'] = 1;
        mymap['V'] = 5;
        mymap['X'] = 10;
        mymap['L'] = 50;
        mymap['C'] = 100;
        mymap['D'] = 500;
        mymap['M'] = 1000;

        for(int i = 0; i < s.length(); i++){
            if(mymap[s[i]] < mymap[s[i + 1]]){
                answer -= mymap[s[i]];
            }
            else{
                answer += mymap[s[i]];
            }
        }

    }
};

