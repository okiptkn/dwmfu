static const char red[]             = "#be1932";
static const char red2[]            = "#fb506a";
static const char darkbrw[]         = "#05111D";
static const char darkgry[]         = "#c4bfbf";
static const char titlefg[]         = "#b47283"; 
static const char white[]           = "#ffffff";
static const char lightgry[]        = "#d2cdcd";
static const char lightgry2[]       = "#e7e2e2";
static const char *colors[][6]      = {
	/*               fg            bg           border   */
	[SchemeNorm]   = { darkgry,    darkbrw,    white },
	[SchemeSel]    = { lightgry2,  red,        white },
    [SchemeUrg]    = { darkbrw,    darkgry,    white },
    [SchemeTitle]  = { titlefg,    darkbrw,    white },
    [SchemeStatus] = { red2,       darkbrw,    white },
    [SchemePowel]  = { red,        darkbrw,    white },
};
