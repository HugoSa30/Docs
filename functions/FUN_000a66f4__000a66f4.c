/*
 * Program: n42.bin
 * Function: FUN_000a66f4
 * Entry: 000a66f4
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000a66f4(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  *param_3 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = 0x1f - LZCOUNT(param_2);
      uVar2 = ~(1 << (uVar1 & 0x3f));
      param_2 = param_2 & uVar2;
      if (*(short *)(param_1 + uVar1 * 8 + 6) < 0) {
        *param_3 = *param_3 | 1 << (uVar1 & 0x3f);
      }
      else {
        *param_3 = *param_3 & uVar2;
      }
    } while (param_2 != 0);
  }
  return 0;
}

