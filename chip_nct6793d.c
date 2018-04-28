/*
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */

#include <string.h>
#include <inttypes.h>
#include "global.h"

/* Function prototypes */
int nct6793d_main(int, const int, struct sensors *);

/*
 * External functions (main.c)
 */
extern void	VERBOSE(const char *, ...);

int
nct6793d_main(int fd, const int slave, struct sensors *s) {
	VERBOSE("nct6793d_main(fd = %d, slave = 0x%02x, s = %p)\n",
		fd, slave, s);

	VERBOSE("nct6793d_main() returning\n");
	return 0;
}
