/*
 * Program: n42.bin
 * Function: FUN_000b4d28
 * Entry: 000b4d28
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000b4d28(int param_1)

{
  undefined4 uVar1;
  
  if (((*(byte *)(param_1 + 0x20) < *(byte *)(param_1 + 0x19)) &&
      (*(ushort *)(param_1 + 0x12) < *(ushort *)(param_1 + 0xe))) &&
     ((*(ushort *)(param_1 + 2) < *(ushort *)(param_1 + 0x14) || (*(char *)(param_1 + 0x1d) == '\0')
      ))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

