/**
 * @file
 * 
 * @brief Contains the definition of the class VirtualPixelStrip.
 */

#include <cstdint>

#include <vector>
#include <utility>

#include "frampton/i_pixel_strip.h"

namespace frampton {

class VirtualPixelStrip : public IPixelStrip {
public:
    VirtualPixelStrip(IPixelStrip *parent_strip, std::vector<std::pair<pixel_t,pixel_t>> partial_strips);

private:
    IPixelStrip* parent_strip {nullptr};
};

} // namespace frampton
