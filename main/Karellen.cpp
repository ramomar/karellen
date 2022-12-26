#include "Karellen.h"

static const char * TAG = "Karellen";

void Karellen::Init(void)
{
    state = false;
    pin = (gpio_num_t) GPIO_NUM_19;

    gpio_config_t io_conf;
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_OUTPUT;
    io_conf.pin_bit_mask = (1ULL<<GPIO_NUM_19);
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    esp_err_t error = gpio_config(&io_conf);

    if(error!=ESP_OK){
        ESP_LOGE(TAG,"Error configuring control pin");
    }
}

void Karellen::Set(bool state)
{
    ESP_LOGI(TAG, "Setting state to %d", state ? 1 : 0);

    if (this->state == state)
        return;

    this->state = state;

    Actuate();
}

void Karellen::Toggle()
{
    ESP_LOGI(TAG, "Toggling state to %d", !this->state);
    this->state = !this->state;

    Actuate();
}

bool Karellen::IsTurnedOn()
{
    return this->state;
}

void Karellen::Actuate()
{
    gpio_set_level(this->pin, this->state ? 1 : 0);
}
