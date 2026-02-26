#ifndef COLOR_H
#define COLOR_H

#include <stddef.h>
#include <stdint.h>

typedef uint32_t Color;

static const uint32_t RED   = 0x00FF0000;
static const uint32_t GREEN = 0x0000FF00;
static const uint32_t BLUE  = 0x000000FF;

// tol muted palette
static const uint32_t TURQ    = 0x0044AA99;
static const uint32_t MAGENTA = 0x00AA4499;
static const uint32_t EMERALD = 0x00117733;
static const uint32_t ROUGE   = 0x00cc6677;
#endif

