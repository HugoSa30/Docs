/*
 * Program: n42.bin
 * Function: FUN_000f45d8
 * Entry: 000f45d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000f45d8(uint *param_1)

{
  char cVar1;
  int local_10 [2];
  
  if (_DAT_003fc2fc == 0xc) {
    *param_1 = _DAT_003fc304;
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

