#ifndef _RANDOM_RANDOM_H
#define _RANDOM_RANDOM_H

#if defined __cplusplus
extern "C" {
#endif

#include <stdint.h>

#define random_int8()  (int8_t)(random_int64() & 0xFF)
#define random_int16() (int16_t)(random_int64() & 0xFFFF)
#define random_int32() (int32_t)(random_int64() & 0xFFFFFFF)
#define random_int64() (int64_t)(random_uint64())

#define random_uint8()  (uint8_t)(random_uint64() & 0xFF)
#define random_uint16() (uint16_t)(random_uint64() & 0xFFFF)
#define random_uint32() (uint32_t)(random_uint64() & 0xFFFFFFF)


extern uint64_t random_uint64(void);
 
#if defined __cplusplus
}
#endif

#endif
