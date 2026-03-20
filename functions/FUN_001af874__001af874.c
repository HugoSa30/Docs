/*
 * Program: n42.bin
 * Function: FUN_001af874
 * Entry: 001af874
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001af874(undefined4 param_1,int param_2,undefined *param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  byte bVar3;
  
  if (param_3 == &DAT_00304000) {
    puVar2 = (undefined4 *)&DAT_003fc36c;
  }
  else {
    puVar2 = (undefined4 *)&UNK_003fc3a4;
  }
  uVar1 = 0;
  do {
    if (puVar2[uVar1 * 2 + 1] == param_4) {
      return 2;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 7);
  if (param_2 == 2) {
    bVar3 = 0;
    do {
      if (puVar2[1] == 0) {
LAB_001af988:
        puVar2[1] = param_4;
        *puVar2 = param_1;
        return 1;
      }
      puVar2 = puVar2 + 2;
      bVar3 = bVar3 + 1;
    } while (bVar3 < 7);
    if (_DAT_003fc364 != (code *)0x0) {
      (*_DAT_003fc364)(10,0x34,param_4);
    }
  }
  else {
    puVar2 = puVar2 + 0xc;
    bVar3 = 0;
    do {
      if (puVar2[1] == 0) goto LAB_001af988;
      puVar2 = puVar2 + -2;
      bVar3 = bVar3 + 1;
    } while (bVar3 < 7);
    if (_DAT_003fc364 != (code *)0x0) {
      (*_DAT_003fc364)(10,0x34,param_4);
    }
  }
  return 0;
}

