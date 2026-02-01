//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		                                              /*Update Interval*/	/*Update Signal*/
	{"", "/home/dawn/dotfiles/scripts/bin/music_status.sh",	 0,  10},
	{"", "/home/dawn/dotfiles/scripts/bin/bar_status.sh",	   30, 0},
	{"", "date '+%m/%d %a %I:%M%p'",	                       60, 0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
