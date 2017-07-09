#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n = 0;
    cin >> n ;
    
    while(n--)
    {
        string str ;
        cin >> str;
        vector<char> ar;
        bool yes = true;
        
        for (auto c : str)
        {
            if (!yes)
                break;
           // cout << c << " " ;
            switch (c)
            {
                case '{':
                case '(':
                case '[': ar.push_back(c);
                          break;
                case '}':
                    {   
                        if(ar.size() == 0 || ar[ar.size()-1] != '{')
                        {
                            
                            yes = false;
                        }
                        else
                            ar.pop_back();
                        
                     }
                        break;
                case ')':
                        {
                        if(ar.size() == 0 ||ar[ar.size()-1] != '(')
                        {
                            
                            yes = false;
                        }
                        else
                            ar.pop_back();
                        
                      }
                    break;
                case ']':
                     {
                        if(ar.size() == 0 ||ar[ar.size()-1] != '[')
                        {
                            
                            yes = false;
                        }
                        else
                            ar.pop_back();
                        
                     }
                    break;
                default : break;
                          
            }
            
        }
        if ( ar.size() == 0 && yes)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
    
    return 0;
}

