#include <stdlib.h>
#include <unistd.h>
#include <curses.h>
#include "cmines.h"
#include "Screen.h"
#include "silentscreen.h"

static void silentinit(Minefield *f) {
}

static void silentdeinit(Minefield *f) {
}

static void silentupdatefield(Minefield *f, const char *field) {
}

static void silentupdatetile(Minefield *f, int idx) {
}

static void silentspeak(Minefield *f, const char *msg) {
	printf("%s\n", msg);
}

void silentscreen(Screen *s, Minefield *f) {
	s->init = &silentinit;
	s->deinit = &silentdeinit;
	s->updatefield = &silentupdatefield;
	s->updatetile = &silentupdatetile;
	s->speak = &silentspeak;
	s->data = NULL;
}