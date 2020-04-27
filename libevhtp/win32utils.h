#ifndef __WIN32_UTILS__H__
#define __WIN32_UTILS__H__

#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int strcasecmp(const char* s1, const char* s2);
int strncasecmp(const char* s1, const char* s2, size_t n);

#endif