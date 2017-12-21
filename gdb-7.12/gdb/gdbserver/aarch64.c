/* *INDENT-OFF* */ /* THIS FILE IS GENERATED */

/* A register protocol for GDB, the GNU debugger.
   Copyright (C) 2001-2013 Free Software Foundation, Inc.

   This file is part of GDB.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* This file was created with the aid of ``regdat.sh'' and ``./../regformats/aarch64.dat''.  */

#include "server.h"
#include "regdef.h"
#include "tdesc.h"

static struct reg regs_aarch64[] = {
  { "x0", 0, 64 },
  { "x1", 64, 64 },
  { "x2", 128, 64 },
  { "x3", 192, 64 },
  { "x4", 256, 64 },
  { "x5", 320, 64 },
  { "x6", 384, 64 },
  { "x7", 448, 64 },
  { "x8", 512, 64 },
  { "x9", 576, 64 },
  { "x10", 640, 64 },
  { "x11", 704, 64 },
  { "x12", 768, 64 },
  { "x13", 832, 64 },
  { "x14", 896, 64 },
  { "x15", 960, 64 },
  { "x16", 1024, 64 },
  { "x17", 1088, 64 },
  { "x18", 1152, 64 },
  { "x19", 1216, 64 },
  { "x20", 1280, 64 },
  { "x21", 1344, 64 },
  { "x22", 1408, 64 },
  { "x23", 1472, 64 },
  { "x24", 1536, 64 },
  { "x25", 1600, 64 },
  { "x26", 1664, 64 },
  { "x27", 1728, 64 },
  { "x28", 1792, 64 },
  { "x29", 1856, 64 },
  { "x30", 1920, 64 },
  { "sp", 1984, 64 },
  { "pc", 2048, 64 },
  { "cpsr", 2112, 32 },
  { "v0", 2144, 128 },
  { "v1", 2272, 128 },
  { "v2", 2400, 128 },
  { "v3", 2528, 128 },
  { "v4", 2656, 128 },
  { "v5", 2784, 128 },
  { "v6", 2912, 128 },
  { "v7", 3040, 128 },
  { "v8", 3168, 128 },
  { "v9", 3296, 128 },
  { "v10", 3424, 128 },
  { "v11", 3552, 128 },
  { "v12", 3680, 128 },
  { "v13", 3808, 128 },
  { "v14", 3936, 128 },
  { "v15", 4064, 128 },
  { "v16", 4192, 128 },
  { "v17", 4320, 128 },
  { "v18", 4448, 128 },
  { "v19", 4576, 128 },
  { "v20", 4704, 128 },
  { "v21", 4832, 128 },
  { "v22", 4960, 128 },
  { "v23", 5088, 128 },
  { "v24", 5216, 128 },
  { "v25", 5344, 128 },
  { "v26", 5472, 128 },
  { "v27", 5600, 128 },
  { "v28", 5728, 128 },
  { "v29", 5856, 128 },
  { "v30", 5984, 128 },
  { "v31", 6112, 128 },
  { "fpsr", 6240, 32 },
  { "fpcr", 6272, 32 },
};

static const char *expedite_regs_aarch64[] = { "x29", "sp", "pc", 0 };
static const char *xmltarget_aarch64 = "aarch64.xml";

const struct target_desc *tdesc_aarch64;

void
init_registers_aarch64 (void)
{
  static struct target_desc tdesc_aarch64_s;
  struct target_desc *result = &tdesc_aarch64_s;

  result->reg_defs = regs_aarch64;
  result->num_registers = sizeof (regs_aarch64) / sizeof (regs_aarch64[0]);
  result->expedite_regs = expedite_regs_aarch64;
  result->xmltarget = xmltarget_aarch64;

  init_target_desc (result);

  tdesc_aarch64 = result;
}
