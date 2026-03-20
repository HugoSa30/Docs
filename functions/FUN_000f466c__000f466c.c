/*
 * Program: n42.bin
 * Function: FUN_000f466c
 * Entry: 000f466c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f466c(uint *param_1)

{
  char cVar1;
  int local_10 [2];
  
  if (_DAT_003fc2f8 == 0xc) {
    *param_1 = _DAT_003fc300;
  }
  else {
    cVar1 = (*(code *)&SUB_00064540)(local_10);
    if (cVar1 == '\0') {
      return 0;
    }
    *param_1 = (uint)(local_10[0] * 0x78) / (uint)*(byte *)(_DAT_003fc2c0 + 0x10);
  }
  return 1;
}

