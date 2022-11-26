// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
// the ^c#*^ are fg colors form https://dwm.suckless.org/patches/status2d/ 
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"^d^ ^b#d65d0e^^c#1d2021^  ^b#fe8019^ ", "xbps-install -unM | wc -l",					21600,	 10},
    {"^d^ ^b#b16286^^c#1d2021^  ^b#d3869b^ ", "block-keymap ",							0,	 12},
    {"^d^ ^b#98971a^^c#1d2021^  ^b#b8bb26^ ", "block-cpu perc",    						5,	 0},
    {"^d^ ^b#458588^^c#1d2021^  ^b#83a598^ ", "block-temperature /sys/class/thermal/thermal_zone0/temp",	5,	 0},
    {"^d^ ^b#689d6a^^c#1d2021^  ^b#8ec07c^ ", "block-ram used",    						10,	 0},
    {"^d^ ^b#d79921^^c#1d2021^  ^b#fabd2f^ ", "block-battery perc BAT0",  					60,	 0},
    {"^d^ ^b#cc241d^^c#1d2021^  ^b#fb4934^ ", "block-datetime \"%H:%M\"",					60,	 0},
    {"^d^ ", "",					0,	 0},

};


/*
    {"^b#d79921^^c#1d2021^  ^d^^c#fabd2f^ ", "block-battery perc BAT0",  				60,	 0},
    {"^b#458588^^c#1d2021^  ^d^^c#83a598^ ", "block-temperature /sys/class/thermal/thermal_zone0/temp", 5,	 0},
    {"^b#98971a^^c#1d2021^  ^d^^c#b8bb26^ ", "block-cpu perc",    					2,	 0},
    {"^b#689d6a^^c#1d2021^  ^d^^c#8ec07c^ ", "block-ram used",    					10,	 0},
    {"^b#b16286^^c#1d2021^  ^d^^c#d3869b^ ", "block-datetime \"%H:%M \"",		60,	 0},
*/

/*

    {" ^c#d79921^ ", "block-battery perc BAT0",  				60,	 0},
    {"^c#83a598^ ", "block-temperature /sys/class/thermal/thermal_zone0/temp", 5,	 0},
    {"^c#b8bb26^ ", "block-cpu perc",    					2,	 0},
    {"^c#8ec07c^ ", "block-ram used",    					10,	 0},
    {"^c#d3869b^ ", "block-datetime \"%H:%M  %a. %d %b. %Y\"",		60,	 0},

*/

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] =" ";
static unsigned int delimLen = 1;
