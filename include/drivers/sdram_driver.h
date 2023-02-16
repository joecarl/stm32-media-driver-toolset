#ifndef SDRAM_DRIVER_H
#define SDRAM_DRIVER_H

#include <stm32f4xx.h>
#include <stdbool.h>


void SDRAM_Init(void);

bool SDRAM_IsReady();

__IO void* SDRAM_malloc(size_t size);


#endif
