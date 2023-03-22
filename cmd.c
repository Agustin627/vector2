//
// cmd.c -- Terminal Arguments
//
// This file is owned by the vector project
//
// Created by Aarch-64 on 18/12/2022
// Copyright (C) 2022 Agustín Gutíerrez. All rights reserved.
//

#include "include/cmd.h"

/* READ ONLY VAR */
const char *const vector_copyright = ("Copyright (C) 2022 Agustín Gutíerrez, Xdanep.");
const char *const vector_license = ("License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n");

const char *const dist_version = DISTVERSION;
const int build_version = BUILDVERSION;
const char *const release_status = RELSTATUS;
const char *const build_platform = BUILDPTFORM;

/* PRINT (Vector, version x.x.x(x)-xxxxx (xxxxxxxxxxx)) */
void show_version(void)
{
    printf("Vector, version %s(%d)-%s (%s)\n", dist_version, build_version, release_status, build_platform);
}

/* PRINT EXTRA INFO */
void extended(void)
{
    printf("%s\n", (vector_copyright));
    printf("%s\n", (vector_license));
    printf("%s\n", ("This is free software; you are free to change and redistribute it."));
    printf("%s\n", ("There is NO WARRANTY, to the extent permitted by law."));
}

/* CLI arguments */
void arguments(char *cmd_argv[], int cmd_argv_cnt)
{
    cmd_argv[cmd_argv_cnt++] = "--help";	/* - Argument 0 */
    cmd_argv[cmd_argv_cnt++] = "-h" ;	        /* - Argument 1 */
    cmd_argv[cmd_argv_cnt++] = "--version" ;	/* - Argument 2 */
    cmd_argv[cmd_argv_cnt++] = "-v" ;	        /* - Argument 3 */
}

void			/* - Exit status */
cmd(int  argc,		/* - Number of command-line arguments (1 or 2) */
     char *argv[])	/* - Command-line arguments */
{
    static	int	cmd_argv_cnt = 0 ;	/* - Argument counter */
    static	char	*cmd_argv[4] ;		/* - Command argument beffer */
    
    bool init_status = false;
    
    if ((argc > 1))
    { 
        arguments(cmd_argv, cmd_argv_cnt);      /* - Write arguments */
          
        // HELP
        if ((strcmp(argv, cmd_argv[0]) == 0))
        { 
          printf("--version\t\t\tProgram version\n")      
        }
        
        if ((strcmp(argv, cmd_argv[1]) == 0))
        { 
          printf("--version\t\t\tProgram version\n")      
        }

        // VERSION
        if ((strcmp(argv, cmd_argv[2]) == 0))
        { 
          show_version();
          extended();      
        }
        
        if ((strcmp(argv, cmd_argv[3]) == 0))
        { 
          show_version();
          extended();      
        }

        else
        {
          exit(EXIT_FAILURE);
        }
          
    }
    
}
