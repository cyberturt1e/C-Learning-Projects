#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;


int main(){
    string firstWord;
    string secWord;

    //ask for first word
    cout << "Please enter your first word: ";
    cin >> firstWord;

    //ask for second word
    cout << "Please enter the next word: ";
    cin >> secWord;

    //if then to declare which one is longer or shorter
    if(firstWord == secWord){
        cout << "These words are exactly the same.\n";
    }else if(firstWord.length() > secWord.length()){
        cout << "The first word is longer, therefore the seond word is shorter.\n";
    }else if(firstWord.length() < secWord.length()){
        cout << "The second word you entered is definitely longer than the first word. Beep Boop.\n";
    }else if(firstWord.length() == secWord.length()){
        cout << "The length of both words are similar, similarly the same. The exact same. No difference.\n";
    }else{
        cout << "I am but a poor bot and cannot determine which word is longer or shorter =(.\n";
    }
}