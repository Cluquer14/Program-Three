//
//  guessedLetters.h
//  CS250_Hangman
//
//  Created by Charlotte Luquer on 11/1/24.
//

#ifndef guessedLetters_h
#define guessedLetters_h
#include <vector>
#include <string>

class GuessedLetters {
private:
    std::vector<char> m_guessed;

public:
    GuessedLetters() = default;

    std::string getLetters() {
        std::string guessedStr;
        for (char c : m_guessed) {
            guessedStr += c;
            guessedStr += ' ';
        }
        return guessedStr;
    }

    void addLetter(char letter) {
        m_guessed.push_back(letter);
    }
};

#endif /* guessedLetters_h */
