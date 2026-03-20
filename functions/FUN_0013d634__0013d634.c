/*
 * Program: n42.bin
 * Function: FUN_0013d634
 * Entry: 0013d634
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013d634(void)

{
  byte *in_r6;
  undefined *unaff_r20;
  char *unaff_r21;
  undefined unaff_r25;
  undefined *unaff_r31;
  
  *unaff_r31 = unaff_r25;
  fonstat = 2;
  DAT_005b9784 = _DAT_001c1a44;
  DAT_005b9786 = _ANWFOST;
  _DAT_003faa0c = _ANWFOST;
  if (0x7fff < _ANWFOST) {
    _DAT_003faa0c = 0x7fff;
  }
  *in_r6 = *in_r6 & 0xfe | 1;
  DAT_003fdb44 = 0;
  DAT_005b8daa = DAT_005b8daa & 0x81;
  *in_r6 = *in_r6 & 0xfd;
  DAT_003faa20 = 0;
  DAT_003faa10 = 0;
  DAT_003faa11 = 0;
  DAT_003faa0a = 0;
  DAT_003faa0b = 0;
  DAT_003faa28 = 0;
  DAT_003faa29 = 0;
  DAT_003faa12 = 0;
  DAT_003faa13 = 0;
  DAT_003faa2c = 0;
  DAT_003faa2d = 0;
  DAT_003faa08 = 0;
  DAT_003faa09 = 0;
  DAT_003faa2a = 0;
  DAT_003faa2b = 0;
  DAT_003faa0e = 0;
  DAT_003faa0f = 0;
  DAT_003faa14 = 0;
  DAT_003faa15 = 0;
  *in_r6 = *in_r6 & 0xfb;
  *unaff_r20 = 1;
  if (((*unaff_r21 != '\0') && (DAT_005b857d == '\0')) && (DAT_005b8cd0 == '\0')) {
    *unaff_r21 = '\0';
  }
  return;
}

