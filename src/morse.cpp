//
// Created by kayla on 1/10/25.
//

#include "morse.hpp"

#include <cctype>
#include <cstring>

std::vector<Morse> to_morse(const char *in) {
    std::vector<Morse> out;
    out.reserve(strlen(in) * 6);

    while (*in != '\0') {
        switch (tolower(*in)) {
            case 'a':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'b':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'c':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'd':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'e':
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'f':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'g':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'h':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'i':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'j':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'k':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'l':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'm':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'n':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'o':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'p':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 'q':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'r':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 's':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case 't':
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'u':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'v':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'w':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'x':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'y':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case 'z':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case '0':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case '1':
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case '2':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case '3':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case '4':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dash);
                out.push_back(CharPause);
                break;
            case '5':
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case '6':
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case '7':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case '8':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case '9':
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dash);
                out.push_back(Dot);
                out.push_back(CharPause);
                break;
            case ' ':
                out.push_back(WordPause);
                break;
            default:
                break;
        }
        ++in;
    }

    return out;
}
