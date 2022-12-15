// 
// cmd.c
// cmath
//
// Created by Aarch-64 on 8/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "var.h"
#include "function.h"

typedef struct version
{
    char version[20];
    char help[20];
    //
    char namever[15];
    char builver[60];
    char copyver[60];
    char licever[90];
    char typever[70];
    char garaver[70];
} version;

version v;

void VerSaveVar(void)
{
    strcpy(v.version, "--version");
    strcpy(v.help, "--help");
    //
    strcpy(v.namever, "cmath 0.3\n");
    strcpy(v.builver, "This program was built for x86_64-pc-linux-gnu\n");
    strcpy(v.copyver, "Copyright (C) 2022-2022 Aarch-64 & xdanep.\n");
    strcpy(v.licever, "GPLv3+ License: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>\n\n");
    strcpy(v.typever, "This is free software: anyone is free to redistribute and modify it.\n");
    strcpy(v.garaver, "There is no WARRANTY, up to the limits permitted by applicable laws.\n");
}

void cmd(int argc, char *argv[])
{
    (void)argc;
  
    VerSaveVar();
      
    if (argc==2)
    {
        if (!strcmp(argv[1], v.help)) // display help
        {
            printf("--version\t\t\tProgram version\n");
            printf("music.mp3\t\t\tPlay the music\n");
            exit(EXIT_SUCCESS);
        }
        else if (!strcmp(argv[1], v.version)) // display program version
        {
            printf("%s%s%s%s%s%s",v.namever,v.builver,v.copyver,v.licever,v.typever,v.garaver);
            exit(EXIT_SUCCESS);
        }
    }
}
