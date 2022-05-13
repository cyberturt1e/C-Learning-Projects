#include <iostream>
using std::cout;
using std::cin;

int main(){
    srand(time(0));
    int randNum = (rand() % 100) + 1;
    int userInput = 0;
    int attempts = 0;
    bool correct = false;


    cout << "Guess the number between 1-100: ";
    cin >> userInput;
    
    while(!correct){    
        if((1 < userInput) && (userInput < 100)){
            if(userInput > randNum){
                cout << "The number you have guessed in too big!\n    Try again: ";
                cin >> userInput;
            }else if(userInput < randNum){
                cout << "The number you have guessed in too small!\n    Try again: ";
                cin >> userInput;
            }else if(userInput == randNum){
                cout << "Congratulations! It took you " << attempts +1 << " guesses to guess the right number!\n";
                correct = true;
            }
            attempts++;
        }else{
            cout << "Sorry, the number you have chosen is not within the required range. Please review your notes on second grade math and try again. Good bye!\n";
        }

    }
    return 0;
}
