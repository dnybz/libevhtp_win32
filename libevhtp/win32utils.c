#include "win32utils.h"

int strcasecmp(const char* s1, const char* s2)
{
	int c1 = 0, c2 = 0;
	if (s1 == s2) {
		return 0;
	}

	do {
		c1 = tolower(*s1++);
		c2 = tolower(*s2++);
	} while (c1 == c2 && c1 != 0);

	return c1 - c2;
}

int strncasecmp(const char * s1, const char * s2, size_t n)
{
	char c1, c2;

	if (!n) return 0;

	do { 
		c1 = *s1++; c2 = *s2++;
	} while (--n && c1 && c2 && (tolower(c1) == tolower(c2)));

	return tolower(c1) - tolower(c2);
}
