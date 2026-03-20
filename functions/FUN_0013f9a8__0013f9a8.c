/*
 * Program: n42.bin
 * Function: FUN_0013f9a8
 * Entry: 0013f9a8
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0013f9a8(short param_1)

{
  undefined *unaff_r29;
  ushort *unaff_r31;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (0xfe < param_1) {
    param_1 = 0xfe;
  }
  *unaff_r29 = (char)param_1;
  DAT_005b89ed = DAT_005b89ed & 0xfe;
  DAT_005b89e8 = DAT_001d1a26;
  if ((*unaff_r31 & 0x400) == 0) {
    DAT_005b89e8 = 0;
  }
  return;
}

