using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char, int> magazineLetters;
        for(int i=0; i<magazine.length();i++)
        {
            char c = magazine[i];
            
            auto it = magazineLetters.find(c);
            if(it == magazineLetters.end())
            {
                magazineLetters.insert(make_pair(c, 1));
            }
            else
            {
                it->second = it->second+1;
            }
        }
        
        /*cout << "Elements in magazineletters are\n";
        cout << "KEY\tELEMENT\n";
        for(auto it= magazineLetters.begin(); it!=magazineLetters.end(); ++it)
        {
            cout << it->first << '\t' << it->second << '\n';
        }*/
        
        for(int i=0; i<ransomNote.length();i++)
        {
            char r = ransomNote[i];
            
            int currentCount = 0;;
            auto it = magazineLetters.find(r);
            if( it != magazineLetters.end())
            {
                currentCount = it->second;
            }
            
            if(currentCount == 0)
            {
                return false;
            }
            
            else
            {
                it->second = it->second-1;
            }
        }
        
        return true;
    }
};