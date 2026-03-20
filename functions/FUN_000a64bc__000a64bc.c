/*
 * Program: n42.bin
 * Function: FUN_000a64bc
 * Entry: 000a64bc
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000a64bc(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined2 uVar2;
  
  if (param_2 != 0) {
    do {
      uVar1 = 0x1f - LZCOUNT(param_2);
      param_2 = param_2 & ~(1 << (uVar1 & 0x3f));
      if ((param_3 >> (uVar1 & 0x3f) & 1) == 0) {
        uVar2 = 0x4000;
      }
      else {
        uVar2 = 0x4800;
      }
      *(undefined2 *)(param_1 + uVar1 * 8 + 6) = uVar2;
    } while (param_2 != 0);
  }
  return 0;
}

