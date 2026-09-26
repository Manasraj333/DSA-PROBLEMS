class Solution {
public:
    string intToRoman(int num) {
        // Values and symbols ordered from largest to smallest
        const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        string roman = "";
        
        // Loop through the values
        for (int i = 0; i < 13; ++i) {
            // While the current value can fit into num, append its symbol
            while (num >= values[i]) {
                roman += symbols[i];
                num -= values[i];
            }
        }
        
        return roman;
    }
};
