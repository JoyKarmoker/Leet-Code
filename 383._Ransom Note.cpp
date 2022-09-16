class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        //cout << ransomNote <<" " << magazine << endl;
        int magazineLength = magazine.length();
        int ransomNoteLength = ransomNote.length();
        int magazineIndex;
        int ransomIndex = 0;
        bool matched = true;
        
        for(magazineIndex = 0; magazineIndex<magazineLength; magazineIndex++)
        {
            if(magazine[magazineIndex] == ransomNote[ransomIndex])
            {
                ransomNote[ransomIndex++] = '0';
                
                if(ransomIndex >= ransomNoteLength){
                    break;
                }
            }
        }
        
        //cout << ransomNote <<" " << magazine << endl;
        
        for(int i=0; i<ransomNoteLength; i++)
        {
            if(ransomNote[i] != '0')
            {
                matched = false;
                return false;
            }
        }
        
        if(matched)
        {
            return true;
        }
        
        else
        {
            return false;
        }
        
        
    }
};