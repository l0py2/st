/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
	/* 8 normal colors */
	"#45475a", /* Black */
	"#f38ba8", /* Red */
	"#a6e3a1", /* Green */
	"#f9e2af", /* Yellow */
	"#89b4f4", /* Blue */
	"#f5c2e7", /* Magenta */
	"#94e2d5", /* Cyan */
	"#a6adc8", /* White */

	/* 8 bright colors */
	"#585b70", /* Black */
	"#f38ba8", /* Red */
	"#a6e3a1", /* Green */
	"#f9e2af", /* Yellow */
	"#89b4f4", /* Blue */
	"#f5c2e7", /* Magenta */
	"#94e2d5", /* Cyan */
	"#a6adc8", /* White */

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#f5e0dc",
	"#f5e0dc",

	"#cdd6f4", /* Foreground colour */
	"#1e1e2e", /* Background colour */
};
