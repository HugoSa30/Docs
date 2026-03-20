/*
 * Program: n42.bin
 * Function: FUN_001e9018
 * Entry: 001e9018
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e9018(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  uVar2 = 0;
  uVar1 = param_2 - 1;
  if (param_4 != 0) {
    do {
      if ((int)uVar1 < 0) {
        return;
      }
      uVar4 = *(uint *)(param_3 + uVar2 * 4);
      uVar5 = 0;
      puVar3 = (undefined *)(param_1 + uVar1 + 1);
      do {
        puVar3 = puVar3 + -1;
        *puVar3 = (char)(uVar4 >> (uVar5 & 0x3f));
        uVar1 = uVar1 - 1;
        uVar5 = uVar5 + 8;
        if ((int)uVar1 < 0) break;
      } while (uVar5 < 0x20);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_4);
  }
  if (-1 < (int)uVar1) {
    puVar6 = (undefined *)(param_1 + uVar1);
    puVar3 = puVar6 + 1;
    if ((uVar1 & 1) == 0) {
      *puVar6 = 0;
      uVar1 = uVar1 - 1;
      puVar3 = puVar6;
      if ((int)uVar1 < 0) {
        return;
      }
    }
    do {
      puVar3[-1] = 0;
      puVar3 = puVar3 + -2;
      *puVar3 = 0;
      uVar1 = uVar1 - 2;
    } while (-1 < (int)uVar1);
  }
  return;
}

