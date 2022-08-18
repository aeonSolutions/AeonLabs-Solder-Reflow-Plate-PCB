#include "Tone32.h"

void tone32(uint8_t pin, unsigned int frequency, unsigned long duration, uint8_t channel)
{
    if (ledcRead(channel)) {
        log_e("Tone channel %d is already in use", channel);
        return;
    }
    ledcAttachPin(pin, channel);
    ledcWriteTone(channel, frequency);
    if (duration) {
        delay(duration);
        noTone32(pin, channel);
    }    
}

void noTone32(uint8_t pin, uint8_t channel)
{
    ledcDetachPin(pin);
    ledcWrite(channel, 0);
}
