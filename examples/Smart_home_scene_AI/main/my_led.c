#include "system_lib.h"

#include "my_led.h"


void led_init(int gpio)
{
    gpio_config_t io_conf;
    io_conf.intr_type = (gpio_int_type_t)GPIO_PIN_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pull_up_en = (gpio_pullup_t)1;

    uint64_t test = ((uint64_t)1 << gpio);
    io_conf.pin_bit_mask = test;
    gpio_config(&io_conf);
#ifdef CONFIG_AI_ESP32_AUDIO_KIT_V2_2_BOARD
    gpio_set_level(gpio, true);
#else
    gpio_set_level(gpio, false);
#endif
}

void led_on(int gpio)
{
#ifdef CONFIG_AI_ESP32_AUDIO_KIT_V2_2_BOARD
    gpio_set_level(gpio, false);
#else
    gpio_set_level(gpio, true);
#endif
}

void led_off(int gpio)
{
#ifdef CONFIG_AI_ESP32_AUDIO_KIT_V2_2_BOARD
    gpio_set_level(gpio, true);
#else
    gpio_set_level(gpio, false);
#endif
}
