/* See LICENSE file for copyright and license details. */
#include <stdio.h>
#include <time.h>

#include "util.h"

/*
 *
 * Usage:
 * block-datetime <format>
 *
 * Examole:
 * block-datetime "%H:%M  %a. %d %b. %Y"
 *
 * check out the FORMAT section in "man date"
 *
 * */

const char *datetime(const char *fmt) {
  time_t t;

  t = time(NULL);
  if (!strftime(buf, sizeof(buf), fmt, localtime(&t))) {
    warn("strftime: Result string exceeds buffer size");
    return NULL;
  }

  return buf;
}

char buf[1024];
int main(int argc, char **args) {

  if (argc == 2) {
    printf("%s", datetime(args[1]));
  }
  return 0;
}
