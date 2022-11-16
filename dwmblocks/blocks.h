// Modify this file to change what commands output to your statusbar, and
// recompile using the make command.
// the ^c#*^ are fg colors form https://dwm.suckless.org/patches/status2d/ 
static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {" ^c#d79921^ ", "block-battery perc BAT0",  				60,	 0},
    {"^c#83a598^ ", "block-temperature /sys/class/thermal/thermal_zone0/temp", 5,	 0},
    {"^c#b8bb26^ ", "block-cpu perc",    					2,	 0},
    {"^c#8ec07c^ ", "block-ram used",    					10,	 0},
    {"^c#d3869b^ ", "block-datetime \"%H:%M  %a. %d %b. %Y\"",		60,	 0},

};

// sets delimeter between status commands. NULL character ('\0') means no
// delimeter.
static char delim[] ="  ";
static unsigned int delimLen = 2;
