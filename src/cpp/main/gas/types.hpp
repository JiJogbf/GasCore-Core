#ifndef GAS_TYPES_HPP_23012021_152332
#define GAS_TYPES_HPP_23012021_152332

#include <cstdint>
#include <string>
#include <vector>

namespace gas{
    // TODO: add compiler define for unicode mode
    using char_t = char;
    using char_p = char_t*;
    using char_cp = const char_t*;
    
    using u8  = uint8_t;    
    using u16 = uint16_t;    
    using u32 = uint32_t;    
    using u64 = uint64_t;

    // @todo: replace stl containers with own implementation's
    using ByteArray = std::vector<u8>;
}

#endif