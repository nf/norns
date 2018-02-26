/*
 * osc.h
 *
 * user OSC device, send/receive arbitrary OSC within lua scripts
 *
 */

#pragma once
#include <stdarg.h>
#include <stdbool.h> 
#include "lo/lo.h"

extern void osc_init();
extern void osc_deinit();

extern void osc_send(const char *,lo_message);
extern void osc_remote_addr(const char*, const char*);