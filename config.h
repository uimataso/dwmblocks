#define CMDLENGTH 45
#define DELIMITER "  "
#define CLICKABLE_BLOCKS

/* update block my run `kill -((34+signal)) $(pidof dwmblocks)` */

const Block blocks[] = {
	    /* command     interval signal */
	BLOCK("sb-pacman",    0,    28),
	BLOCK("sb-vpn",       0,    27),
	BLOCK("sb-uptime",    5,    26),
	BLOCK("sb-mem",       5,    25),
	BLOCK("sb-brightness",0,    24),
	BLOCK("sb-battery",   5,    23),
	BLOCK("sb-vol",       0,    22),
	BLOCK("sb-network",   0,    21),
	BLOCK("sb-date",      5,    20),
};
