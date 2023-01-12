/* cmd.h --  header terminal arguments for cmd.c */

#ifndef CMD_H_
#define CMD_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdarg.h>
#include <stdbool.h>

// DEFINE FOR CLI ARGUMENTS
#define DISTVERSION "1.1.2"
#define BUILDVERSION 1
#define RELSTATUS "release"

#ifdef __unix__
  #define BUILDPTFORM "x86_64-pc-unix"
#else
  #define BUILDPTFORM "x86_64-pc-generic"
#endif

// CLI ARGUMENTS
void arguments(char *cmd_argv[], int cmd_argv_cnt);
bool exec_argv(int mode, char *argv, char *cmd_argv, char *str);
bool exit_argv(bool init_status);

// SHOW VERSION
void show_version(void);
void extended(void);
void cmd(int argc, char *argv[]);

#endif // CMD_H_
