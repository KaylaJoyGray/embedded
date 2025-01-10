#include <cstring>
#include <ctype.h>
#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"
#include <vector>

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

#define STRLEN 255
char str[STRLEN + 1];

const char *read_line() {
    char c, *ptr;
    for (ptr = str, c = getchar(); c != '\r' && ptr - str < STRLEN; c = getchar()) putchar(*ptr++ = c);
    *ptr = 0;
    return str;
}

int main() {
    stdio_init_all();

    if (cyw43_arch_init()) {
        printf("Wi-Fi init failed");
        return -1;
    }

    //cyw43_arch_enable_sta_mode();

    auto set_led = [](const bool set) -> void {
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, set);
    };

    while (true) {
        printf("Ready for Message: \n");
        const auto text = read_line();
        printf("\n");
        auto message = to_morse(text);
        for (const Morse c: message) {
            switch (c) {
                case Dot:
                    printf("Dot\n");
                    set_led(true);
                    sleep_ms(DIT);
                    set_led(false);
                    sleep_ms(DIT);
                    break;
                case Dash:
                    printf("Dash\n");
                    set_led(true);
                    sleep_ms(DASH);
                    set_led(false);
                    sleep_ms(DIT);
                    break;
                case CharPause:
                    printf("Pause\n");
                    sleep_ms(CHAR_PAUSE);
                    break;
                case WordPause:
                    printf("Long Pause\n");
                    sleep_ms(WORD_PAUSE);
                    break;
            }
        }
    }
}
