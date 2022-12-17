#include "LEDWidget.h"

static const char * TAG = "LEDWidget";

void LEDWidget::Init(void)
{
    mState    = false;
    mGPIONum  = (gpio_num_t) CONFIG_LED_GPIO;
}

void LEDWidget::Set(bool state)
{
    ESP_LOGI(TAG, "Setting state to %d", state ? 1 : 0);
    if (state == mState)
        return;

    mState = state;

    //DoSet();
}

void LEDWidget::Toggle()
{
    ESP_LOGI(TAG, "Toggling state to %d", !mState);
    mState = !mState;

    //DoSet();
}

bool LEDWidget::IsTurnedOn()
{
    return this->mState;
}
