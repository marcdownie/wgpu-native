#ifndef WGPU_H
#define WGPU_H
#include "wgpu.h"
#endif

WGPUShaderSource read_file(const char *name);

void read_buffer_map(
    WGPUBufferMapAsyncStatus status,
    uint8_t *userdata);
