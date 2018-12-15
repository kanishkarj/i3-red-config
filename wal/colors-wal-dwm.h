static const char norm_fg[] = "#a2a7be";
static const char norm_bg[] = "#030C1A";
static const char norm_border[] = "#717485";

static const char sel_fg[] = "#a2a7be";
static const char sel_bg[] = "#9E2B52";
static const char sel_border[] = "#a2a7be";

static const char urg_fg[] = "#a2a7be";
static const char urg_bg[] = "#F31D3A";
static const char urg_border[] = "#F31D3A";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
