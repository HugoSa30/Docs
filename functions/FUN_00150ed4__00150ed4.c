/*
 * Program: n42.bin
 * Function: FUN_00150ed4
 * Entry: 00150ed4
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00150ed4(void)

{
  short local_18 [8];
  
  (*(code *)&SUB_000659dc)(local_18,0,0);
  if ((pgmaster == '\0') && (local_18[0] == -1)) {
    zphfl = 0xff;
    zphflct_w = zphflct_w + 1;
  }
  (*(code *)&SUB_000659dc)(local_18,0,1);
  if ((pgmaster == '\x01') && (local_18[0] == -1)) {
    zphfl4 = 0xff;
    zphfl4ct_w = zphfl4ct_w + 1;
  }
  if (DAT_003fb050 != pgmaster) {
    if (DAT_003fb050 == '\0') {
      (*(code *)&SUB_00fac124)(0,1);
    }
    else if (DAT_003fb050 == '\x01') {
      (*(code *)&SUB_00fac124)(1,1);
    }
    (*(code *)&SUB_00fac124)(pgmaster,3);
    (*(code *)&SUB_00fac018)((int)pgmaster);
    if (DAT_003fb050 == '\0') {
      zphflct_w = 0;
    }
    else if (DAT_003fb050 == '\x01') {
      zphfl4ct_w = 0;
    }
    if (pgmaster == '\0') {
      zphflct_w = 0;
    }
    else if (pgmaster == '\x01') {
      zphfl4ct_w = 0;
    }
  }
  DAT_003fb050 = pgmaster;
  return;
}

