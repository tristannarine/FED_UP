#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/ledc.h"
#include "esp_err.h"


const int LED = 0; // Assigning Pin 4 as the name LED
void setup ()  
{
     pinMode (LED, OUTPUT); // Declaring LED pin as an output.
}
void loop () // Code under this loop runs forever.
{
    digitalWrite (LED, HIGH); // Making LED High.
    delay(1000);              // Some Delay
    digitalWrite (LED, LOW);  // Making LED LOW.
    delay(1000);              // Some Delay
}