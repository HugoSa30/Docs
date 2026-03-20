/*
 * Program: n42.bin
 * Function: FUN_001337b0
 * Entry: 001337b0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001337b0(void)

{
  if (B_pwf != '\0') {
    tansab = TADE;
    _tansabk_w = (ushort)TADE * 0x20 + 0x2586;
  }
  DAT_003fae3c = DAT_001d0a35;
  DAT_003fae3d = DAT_001d0a37;
  DAT_003fae3e = TDTA;
  DAT_003fae3f = TDTA;
  tans = func_0xff2187cc(&DAT_001d0a0c,wtans);
  tanslin = tans;
  if ((TADMX < tans) || ((DAT_003fdfb7 & 1) != 0)) {
    tans = TADE;
  }
  DAT_003fae40 = tans;
  tansk_w = (ushort)tans * 0x20 + 0x2586;
  return;
}

