#include <iostream>
#include <string>

using namespace std;

string eng2noki(){
    string keys[10][5] =
    {   
        {"0", " ", " ", " ", " "},
        {"1", "!", "?", ",", "."},
        {"2","a", "b", "c", ""},
        {"3","d", "e", "f", ""},
        {"4","g", "h", "i", ""},
        {"5","j", "k", "l", ""},
        {"6","m", "n", "o",""},
        {"7","p", "q", "r", "s"},
        {"8","t", "u", "v",""},
        {"9","w", "x", "y", "z"}
    };

    string word, nokicode;
    nokicode = "";
    cout << "Enter the word: ";
    getline(cin >> ws, word);

    for (int i = 0; i < word.length(); i++){
        for (int j = 0; j < 10; j++){
            for (int k = 0; k < 5; k++){
                if(word[i] == keys[j][k][0]){
                    nokicode += to_string(j) + to_string(k+1);
                }
            }
        }
    }
    return nokicode;
}