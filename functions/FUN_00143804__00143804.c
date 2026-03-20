/*
 * Program: n42.bin
 * Function: FUN_00143804
 * Entry: 00143804
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00143804(void)

{
  byte *in_r6;
  int in_r7;
  byte param_6;
  uint in_r9;
  byte *unaff_r31;
  
  if (((((in_r9 & 1) == 0) && ((*(byte *)(in_r7 + 0xc5) & 1) == 0)) &&
      ((*(byte *)(in_r7 + 0xc3) & 1) == 0)) &&
     (((*(byte *)(in_r7 + 199) & 1) == 0 && ((*(byte *)(in_r7 + 0xbb) & 1) == 0)))) {
    *in_r6 = param_6 & 0xbf;
  }
  else if (DAT_001c1110 <= *unaff_r31) {
    *in_r6 = param_6 & 0xbf;
  }
  return;
}

