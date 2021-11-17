#pragma once

#include <stdint.h>

#define WASM_EXPORT(name) __attribute__((export_name(name)))
#define WASM_IMPORT(name) __attribute__((import_name(name)))

WASM_EXPORT("tic") void tic (uint32_t time);

WASM_IMPORT("acos") float w8_acos(float);

WASM_IMPORT("asin") float w8_asin(float);

WASM_IMPORT("atan") float w8_atan(float);

WASM_IMPORT("atan2") float w8_atan2(float,float);

WASM_IMPORT("cos") float w8_cos(float);

WASM_IMPORT("exp") float w8_exp(float,float);

WASM_IMPORT("log") float w8_log(float);

WASM_IMPORT("sin") float w8_sin(float);

WASM_IMPORT("tan") float w8_tan(float);

WASM_IMPORT("pow") float w8_pow(float);

WASM_IMPORT("fmod") float w8_fmod(float,float);

WASM_IMPORT("random") uint32_t w8_random();

WASM_IMPORT("randomf") float w8_randomf();

WASM_IMPORT("randomSeed") float w8_randomSeed();

WASM_IMPORT("cls") void w8_cls(uint32_t color);

WASM_IMPORT("setPixel") void w8_setPixel(uint32_t x,uint32_t y, uint32_t color);

WASM_IMPORT("getPixel") uint32_t w8_getPixel(uint32_t x,uint32_t y);

WASM_IMPORT("hline") void w8_hline(uint32_t left,uint32_t right, uint32_t y, uint32_t color);

WASM_IMPORT("rectangle") void w8_rectangle(float x1, float y1, float x2, float y2, uint32_t color);

WASM_IMPORT("circle") void w8_circle(float cx, float cy, float radius, uint32_t color);