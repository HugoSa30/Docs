/*
 * Program: n42.bin
 * Function: FUN_000a664c
 * Entry: 000a664c
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000a664c(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  
  if (param_2 != 0) {
    do {
      uVar1 = 0x1f - LZCOUNT(param_2);
      param_2 = param_2 & ~(1 << (uVar1 & 0x3f));
      if ((param_3 >> (uVar1 & 0x3f) & 1) == 0) {
        uVar2 = 0;
      }
      else if ((param_4 >> (uVar1 & 0x3f) & 1) == 0) {
        uVar2 = 0x204;
      }
      else {
        uVar2 = 0x404;
      }
      *(undefined2 *)(param_1 + uVar1 * 8 + 6) = uVar2;
    } while (param_2 != 0);
  }
  return 0;
}

