/*
 * Program: n42.bin
 * Function: FUN_0013f874
 * Entry: 0013f874
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0013f8a0) */
/* WARNING: Removing unreachable block (ram,0x0013f8a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013f874(void)

{
  short sVar1;
  uint unaff_r27;
  short unaff_r29;
  ushort *unaff_r31;
  
  DAT_005b89f1 = 2;
  DAT_005b89e0 = _DAT_001c8458;
  DAT_005b89dc = (short)((int)(((int)((int)unaff_r29 * (unaff_r27 & 0xffff)) >> 1) *
                              (uint)_DAT_001c844a) / 500000) + DAT_005b89dc;
  if (DAT_005b89dc < -0xff) {
    DAT_005b89dc = -0xff;
  }
  else if (0xff < DAT_005b89dc) {
    DAT_005b89dc = 0xff;
  }
  DAT_005b89e2 = (short)((int)((int)unaff_r29 * (uint)_DAT_001c8458) / 1000);
  DAT_005b89e4 = DAT_005b89e2 + DAT_005b89dc;
  sVar1 = DAT_005b89e4;
  if ((*unaff_r31 & 0x400) == 0) {
    sVar1 = 0;
  }
  sVar1 = func_0xff222250((int)(short)(ushort)DAT_005b89ec - (int)(short)(ushort)DAT_001c845e,
                          (int)sVar1,(uint)DAT_005b89ec + (uint)DAT_001c8461);
  sVar1 = func_0xff222250(0,(int)sVar1,DAT_001c8460);
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  else if (0xfe < sVar1) {
    sVar1 = 0xfe;
  }
  DAT_005b89ec = (char)sVar1;
  DAT_005b89ed = DAT_005b89ed & 0xfe;
  DAT_005b89e8 = DAT_001d1a26;
  if ((*unaff_r31 & 0x400) == 0) {
    DAT_005b89e8 = 0;
  }
  return;
}

