#include <iostream>
#include <string>

using namespace std;

string noki2engQuick(string nums){

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

    string word;
    word = "";

    if(nums.length() % 2 != 0){
        cout << "Invalid number sequence" << endl;
        return 0;
    }

    int key, clicks;

    for (int i = 0; i < nums.length(); i += 2){
        key = nums[i] - '0';
        clicks = nums[i+1] - '0';

        if (key < 0 || key > 9 || clicks < 1 || clicks > 5 || keys[key][clicks - 1].empty()) {
            cout << "Invalid number sequence" << endl;
            return 0;
        }

        word += keys[key][clicks - 1];
    }

    return word;
}

string Nokiloop2eng(){
    cout << "Enter the Nokiloop sequence: ";
    string nokiloop;
    cin >> nokiloop;
    cout << "How much encryption does the Nokiloop sequence have?: ";
    int encryption;
    cin >> encryption;

    string result = "";
    for (int i = 0; i < encryption; i++){
        result = noki2engQuick(nokiloop);
        nokiloop = result;
    }
    return result;
}

