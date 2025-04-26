
#include <cstdint>

#include "frampton/color.h"

namespace frampton {

class IPixelStrip {
public:
    using pixel_t = uint16_t;
    
    virtual bool show() = 0;
    virtual bool setPixelColor(pixel_t n, RgbColor color) = 0;
    virtual bool fill(RgbColor color, uint8_t brightness = 0) = 0;
    virtual bool fill(pixel_t start, pixel_t end, RgbColor color) = 0;
    virtual bool clear() = 0;
    virtual bool clear(pixel_t start, pixel_t end) = 0;
    virtual bool setBrightness(uint8_t brightness) = 0;
};

} // namespace frampton
