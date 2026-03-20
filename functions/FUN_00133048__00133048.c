/*
 * Program: n42.bin
 * Function: FUN_00133048
 * Entry: 00133048
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00133048(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = _DAT_0001c288;
  if (B_pwf != '\0') {
    uVar2 = 0;
    do {
      *(undefined4 *)(&nn_w1 + uVar2 * 4) = uVar1;
      *(undefined4 *)(&nn_w2 + uVar2 * 4) = uVar1;
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < 3);
  }
  return;
}

