#pragma once

#include "driver/gpio.h"
#include "esp_log.h"

class Karellen
{
public:
    void Init(void);
    void Set(bool state);
    void Toggle(void);
    bool IsTurnedOn(void);

private:
    bool state;
    gpio_num_t pin;
    void Actuate(void);
};
