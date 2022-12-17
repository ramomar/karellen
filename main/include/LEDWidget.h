#pragma once

#include "driver/gpio.h"
#include "esp_log.h"

class LEDWidget
{
public:
    void Init(void);
    void Set(bool state);
    void Toggle(void);
    void UpdateState();
    bool IsTurnedOn(void);

private:
    bool mState;
    uint8_t mBrightness;
    gpio_num_t mGPIONum;
    void DoSet(void);
};
