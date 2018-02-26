static const char red[]             = "#E75467";
static const char darkbrw[]         = "#6c5e5e";
static const char darkgry[]         = "#c4bfbf";
static const char titlefg[]         = "#e1d5a8";
static const char white[]           = "#ffffff";
static const char lightgry[]        = "#d2cdcd";
static const char lightgry2[]       = "#e7e2e2";
static const char *colors[][4]      = {
	/*               fg            bg           border   */
	[SchemeNorm]   = { darkgry,    darkbrw,    white },
	[SchemeSel]    = { lightgry,   red,        white },
    [SchemeTitle]  = { titlefg,    darkbrw,    white },
    [SchemeStatus] = { lightgry2,  red,        white },
};
