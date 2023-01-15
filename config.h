#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

/* update block my run `kill -((34+signal)) $(pidof dwmblocks)` */

const Block blocks[] = {
	    /* command     interval signal */
	BLOCK("sb-bookmark",  0,    27),
	BLOCK("sb-pacman",    0,    24),
	BLOCK("sb-vpn",       0,    25),
	BLOCK("sb-uptime",    5,    23),
	BLOCK("sb-mem",       5,    22),
	BLOCK("sb-vol",       0,    21),
	BLOCK("sb-date",      1,    20),
};
