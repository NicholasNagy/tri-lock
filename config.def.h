#define NUM_POINTS_POLYGON 3

/* user and group to drop privileges to */
static const char *user  = "nick";
static const char *group = "nick";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#FFBF06",     /* after initialization */
	[INPUT] =  "#E5B700",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[INITINNER] = "#FBEB4E",
	[INPUTINNER] = "#FFFF38",
	[FAILEDINNER] = "#FFFF38"
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 75;
static const int innerlogosize = 65;
/* grid width and height for right center alignment */
static const int logow = 12;
static const int logoh = 6;

static XPoint triangles[3][NUM_POINTS_POLYGON] = {
	/* x    y       w       h */
	{
		{  0, -6 },
		{ -3,  0 },
		{  3,  0 }
	},
	{
		{ -3, 0 },
		{ -6, 6 },
		{  0, 6 }
	},
	{
		{ 3, 0 },
		{ 6, 6 },
		{ 0, 6 }
	}
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
//#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;


/* Patch: auto-timeout */
/* should [command] be run only once? */
static const int runonce = 1;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 30;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "systemctl suspend";

