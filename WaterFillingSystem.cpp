#include <stdio.h>
#include <algorithm>

#include "pico/stdlib.h"
#include "hardware/timer.h"

// IR sensor pin
const uint IR_Pin = 0;
const uint RELAY_PIN=13;
const uint RELAY_PIN1=2;

void setup_sensor()
{
    // IR sensor
    gpio_init(IR_Pin);
    gpio_set_dir(IR_Pin, GPIO_IN);
     // Pull up the IR pin
    gpio_pull_up(IR_Pin);


    // Relay module
    gpio_init(RELAY_PIN);
    gpio_set_dir(RELAY_PIN, GPIO_OUT);

    // Relay module
    gpio_init(RELAY_PIN1);
    gpio_set_dir(RELAY_PIN1, GPIO_OUT);
}

int main()
{
    stdio_init_all();

    setup_sensor();

    sleep_ms(2000);

    while(true){
        int IR_reading = gpio_get(IR_Pin); 

        if (IR_reading == 0) {
            // Obstacle detected! Turn LED ON
            // gpio_put(SIGNAL_PIN_LED, 1);
            printf("Bulb is glowing.\n");
            gpio_put(RELAY_PIN, 0);
            gpio_put(RELAY_PIN1, 0);
            sleep_ms(100);
        } 
        else {
            // Path clear. Turn LED OFF
            // gpio_put(SIGNAL_PIN_LED, 0);
            printf("Bulb is off.\n");
            gpio_put(RELAY_PIN, 1);
            gpio_put(RELAY_PIN1, 1);
            sleep_ms(100);

        }

        // 3. Take a tiny 20ms pause so the loop doesn't overwhelm the processor.
        // This allows the Pico to check the sensor 50 times every second!
        sleep_ms(20); 
    }


}