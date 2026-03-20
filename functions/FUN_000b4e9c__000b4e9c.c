/*
 * Program: n42.bin
 * Function: FUN_000b4e9c
 * Entry: 000b4e9c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000b4e9c(ushort *param_1)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_1 + 0xc) == '\0') || (param_1[2] <= *param_1)) ||
     ((*(char *)((int)param_1 + 0x1d) != '\0' &&
      ((param_1[5] < param_1[1] && (param_1[6] <= param_1[3])))))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

