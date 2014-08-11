#ifndef HARDWARE_H_E6YNWQLP
#define HARDWARE_H_E6YNWQLP

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>


typedef struct Hardware
{
	uint32_t (*milliseconds)();
	uint32_t (*microseconds)();

	void (*delay_milliseconds)(uint32_t milliseconds);
	void (*delay_microseconds)(uint32_t microseconds);

	void (*write)(uint8_t pin, uint8_t high);
	uint8_t (*read)(uint8_t pin);
} Hardware;


#ifdef __cplusplus
}
#endif

#endif // end of include guard: HARDWARE_H_E6YNWQLP
