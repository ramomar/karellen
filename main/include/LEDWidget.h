#pragma once

#include "driver/gpio.h"
#include "esp_log.h"
#include "driver/ledc.h"
#include "hal/ledc_types.h"

class LEDWidget
{
public:
    void Init(void);
    void Set(bool state);
    void Toggle(void);
    void SetBrightness(uint8_t brightness);
    void UpdateState();
    uint8_t GetLevel(void);
    bool IsTurnedOn(void);

private:
    bool mState;
    uint8_t mBrightness;
    gpio_num_t mGPIONum;
    void DoSet(void);
};
