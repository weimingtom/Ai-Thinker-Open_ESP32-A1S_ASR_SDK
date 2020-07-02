#include "stdio.h"
#include "string.h"
#include "math.h"
#include "stdint.h"
#include "stdlib.h"
#include "stddef.h"

#include "unistd.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "freertos/event_groups.h"
#include "freertos/semphr.h"

#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_wifi.h"
#include "esp_smartconfig.h"
#include "esp_event.h"
#include "esp_event_loop.h"
#include "esp_err.h"
#include "esp_log.h"
#include "esp_types.h"

#include "driver/gpio.h"
#include "driver/ledc.h"
#include "driver/rmt.h"
#include "driver/periph_ctrl.h"
#include "driver/timer.h"
#include "driver/spi_master.h"
#include "driver/i2s.h"
#include "tcpip_adapter.h"

//#include "ip4_addr.h"

#include "lwip/sockets.h"
#include "lwip/dns.h"
#include "lwip/netdb.h"
#include "lwip/err.h"
#include "lwip/sys.h"

#include "soc/gpio_struct.h"
#include "soc/timer_group_struct.h"

#include "mqtt_client.h"

#include "nvs_flash.h"
#include "nvs.h"

#include "sdkconfig.h"
#include "MediaHal.h"
#include "esp_wn_iface.h"
#include "esp_wn_models.h"
#include "esp_mn_iface.h"
#include "esp_mn_models.h"
#include "recsrc.h"
#include "ringbuf.h"
#include "speech_commands_action.h"
