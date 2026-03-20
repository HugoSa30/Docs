/*
 * Program: n42.bin
 * Function: FUN_000f9f20
 * Entry: 000f9f20
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000f9f20(int param_1,uint param_2,byte *param_3)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_003fc5b5;
  if (uVar1 != 0) {
    do {
      if (((int)(uint)*param_3 < (int)((uint)*(byte *)(param_1 + param_2) - (uint)DAT_003fc5b4)) ||
         ((uint)*(byte *)(param_1 + param_2) + (uint)DAT_003fc5b4 < (uint)*param_3)) {
        return 0;
      }
      param_3 = param_3 + 1;
      if ((int)param_2 < 1) {
        param_2 = (uint)DAT_003fc5ad;
      }
      param_2 = param_2 + 0xff & 0xff;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 1;
}

