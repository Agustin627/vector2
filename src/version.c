// 
// version.c
// vector
//
// Created by Aarch-64 on 15/12/2022
// Copyright © 2022 Aarch-64. All rights reserved.
//

#include <string.h>
#include <stdio.h>
#include "var.h"

#define VECTOR_NAME "vector"
#define VECTOR_VERSION "5.9"

version v;

void VerSaveVar(void)
{
    strcpy(v.version, "--version");
    strcpy(v.help, "--help");
    //
    strcpy(v.namever, VECTOR_NAME);
    strcat(v.namever, " ");
    strcpy(v.verver, VECTOR_VERSION);
    strcat(v.verver, "\n");
    strcpy(v.builver, "This program was built for x86_64-pc-linux-gnu");
    strcat(v.builver, "\n");
    strcpy(v.copyver, "Copyright (C) 2022-2022 Aarch-64 & xdanep.");
    strcat(v.copyver, "\n");
    strcpy(v.licever, "GPLv3+ License: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>");
    strcat(v.licever, "\n\n");
    strcpy(v.typever, "This is free software: anyone is free to redistribute and modify it.");
    strcat(v.typever, "\n");
    strcpy(v.garaver, "There is no WARRANTY, up to the limits permitted by applicable laws.");
    strcat(v.garaver, "\n");
}
