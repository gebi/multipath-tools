#define MAJOR(dev)      ((dev & 0xfff00) >> 8)
#define MINOR(dev)      ((dev & 0xff) | ((dev >> 12) & 0xfff00))
#define MKDEV(ma,mi)    ((mi & 0xff) | (ma << 8) | ((mi & ~0xff) << 12))

int dm_prereq (char *, int, int, int);
int dm_simplecmd (int, const char *, int);
int dm_addmap (int, const char *, const char *, const char *, uint64_t,
	       int, const char *, int, mode_t, uid_t, gid_t);
int dm_map_present (char *);
char * dm_mapname(int major, int minor);
dev_t dm_get_first_dep(char *devname);
char * dm_mapuuid(int major, int minor);
int dm_devn (char * mapname, int *major, int *minor);
