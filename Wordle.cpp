#include <iostream>
#include <string>
using namespace std;


int main(){
    string answer = "TABLE", guess;
    int index = 0;
    int numGuesses = 0;



    cout << "Enter a upper case 5 letter word: " ;

    while (guess != answer && numGuesses < 6){
        numGuesses +=1;
        cin >> guess;

        //Length Check
        while (guess.length() != 5){
            cout << "Please input a 5 letter word:";
            cin >> guess;
        }
        while (index < 5) {
        // How can we get a given letter in guess?
            if (guess[index] == answer[index]) {
            // Print <first letter> - Green
            cout << guess[index] << " - Green" <<endl;
            }
            else if (guess[index] == answer[0]  || guess[index] == answer[1] || guess[index] == answer[2] || guess[index] == answer[3] || guess[index] == answer[4]) {
            // Print <first letter> - Red
            cout << guess[index] << " - Yellow" <<endl;
            }

            else {
            // Print <first letter> - Yellow
            cout << guess[index] << " - Red" <<endl;
            }

        index +=1;
    }
        index = 0;
            if (answer!= guess && numGuesses != 6){
            cout << "Guess again: ";
            }
        }

        if (guess == answer){
            cout << "User won in " <<numGuesses << " tries!" <<endl;
        } else {
            cout << "User lost in " << numGuesses << " guesses. Correct word is TABLE." <<endl;
    }





}