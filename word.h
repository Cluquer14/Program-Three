//
//  word.h
//  CS250_Hangman
//
//  Created by Charlotte Luquer on 11/1/24.
//
//

#ifndef word_h
#define word_h
#include <string>
#include <vector>

class Word {
private:
    std::vector<char> m_currentWord;
    std::string m_word;

public:
    Word(std::string word) : m_word(word) {
        for (char c : word) {
            m_currentWord.push_back('_');
        }
    }

    std::string getWord() {
        std::string displayWord;
        for (char c : m_currentWord) {
            displayWord += c;
            displayWord += ' ';
        }
        return displayWord;
    }

    void addLetter(char letter) {
        for (size_t i = 0; i < m_word.size(); i++) {
            if (m_word[i] == letter) {
                m_currentWord[i] = letter;
            }
        }
    }

    bool findLetter(char letter) {
        return m_word.find(letter) != std::string::npos;
    }

    bool solved() {
        return m_currentWord == std::vector<char>(m_word.begin(), m_word.end());
    }
};

#endif /* word_h */
