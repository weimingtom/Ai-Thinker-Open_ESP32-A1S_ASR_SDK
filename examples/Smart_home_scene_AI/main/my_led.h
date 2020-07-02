#ifndef __MY_LED_H_
#define __MY_LED_H_

#define LED_GPIO1 22
#define LED_GPIO2 19

void led_init(int gpio);
void led_on(int gpio);
void led_off(int gpio);

#endif