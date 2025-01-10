#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

#include "morse.hpp"
#include "io.hpp"

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
