//
// Created by kayla on 1/10/25.
//

#ifndef MORSE_H
#define MORSE_H

#include<vector>

#define DIT 250
#define DOT DIT
#define DASH DIT * 3
#define CHAR_PAUSE DIT * 3
#define WORD_PAUSE DIT * 6

enum Morse {
    Dot,
    Dash,
    CharPause,
    WordPause,
};

std::vector<Morse> to_morse(const char *in);

#endif //MORSE_H
