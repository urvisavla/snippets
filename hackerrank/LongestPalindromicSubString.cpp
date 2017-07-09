#include <iostream>
#include <string>
using namespace std;

const string s = "forgeeksskeegfor";
//const string s = "aaaaaaaaaaaaxxyxxaaaaaaaaaaaaaaaaaaaaaaaaaa";

int findpalindrome(int start, int end)
{
        int length = 0;
        while (start >= 0 && end < s.length() && s.at(start) == s.at(end))             {
            length +=2;;
            start--;
            end++;
        }
        if (length) cout << "start: " << start << " end: " <<  end << " length: " << length << endl;
        return length;
}


void longestpalindrome()
{
        int max_length = 1;
        for(int i = 0; i < s.length(); i++)
        {
                int start = i;
                int end = i+1;
                int length = findpalindrome(start,end);
                 if(length > max_length)
                     max_length = length;
        }
    
        for(int i = 1; i < s.length()-1; i++)
        {
                int start = i-1;
                int end = i+1;
                int length = findpalindrome(start,end) +1;
                 if(length > max_length)
                     max_length = length;
        }
        cout << max_length << endl;
}

int main(int argc, char **argv)
{
    longestpalindrome();
    return 0;
}
