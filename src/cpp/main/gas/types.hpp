#ifndef GAS_TYPES_HPP
#define GAS_TYPES_HPP

#include <cstdint>
#include <string>

namespace gas{
    // TODO: add compiler define for unicode mode
    using char_t = char;
    using char_p = char_t*;
    using char_cp = const char_t*;
    
    using u8  = uint8_t;    
    using u16 = uint16_t;    
    using u32 = uint32_t;    
    using u64 = uint64_t;
}

#endif