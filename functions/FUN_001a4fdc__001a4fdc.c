/*
 * Program: n42.bin
 * Function: FUN_001a4fdc
 * Entry: 001a4fdc
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001a4fdc(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(*(int *)(DAT_005ba9f0 + 0x18) + param_1 * 0xc);
  *puVar1 = 10;
  *(undefined4 *)(puVar1 + 8) = param_2;
  *(undefined2 *)(puVar1 + 4) = param_3;
  if (DAT_005ba9fc == 2) {
    if (DAT_005baa00 == '\0') {
      FUN_0010ef68(puVar1[1],2);
    }
    DAT_005baa00 = '\0';
  }
  FUN_001a4d74(param_1);
  return;
}

