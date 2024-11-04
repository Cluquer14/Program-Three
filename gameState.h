//
//  gameState.h
//  CS250_Hangman
//
//  Created by Charlotte Luquer on 11/1/24.
//

#ifndef gameState_h
#define gameState_h
#include <string>
#include <vector>

class GameState {
private:
    std::vector<std::string> m_state;
    std::string m_allStates[7] = { "Platform", "Head", "Body", "LeftArm", "RightArm", "LeftLeg", "RightLeg" };
    int m_nextState = 0;

public:
    GameState() = default;

    std::string getState() {
        std::string stateStr;
        for (const std::string &s : m_state) {
            stateStr += s + " ";
        }
        return stateStr;
    }

    void addState() {
        if (m_nextState < 7) {
            m_state.push_back(m_allStates[m_nextState]);
            m_nextState++;
        }
    }

    bool gameOver() {
        return m_nextState >= 7;
    }
};

#endif /* gameState_h */
