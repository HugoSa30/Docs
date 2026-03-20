/*
 * Program: n42.bin
 * Function: FUN_001e8f50
 * Entry: 001e8f50
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001e8f50(int param_1,uint param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar4 = 0;
  param_4 = param_4 + -1;
  if ((param_2 != 0) && (-1 < param_4)) {
    puVar3 = (uint *)(param_1 + -4);
    do {
      uVar6 = 0;
      uVar2 = 0;
      pbVar5 = (byte *)(param_3 + param_4 + 1);
      do {
        pbVar5 = pbVar5 + -1;
        uVar6 = uVar6 | (uint)*pbVar5 << (uVar2 & 0x3f);
        param_4 = param_4 + -1;
        uVar2 = uVar2 + 8;
        if (param_4 < 0) break;
      } while (uVar2 < 0x20);
      puVar3 = puVar3 + 1;
      *puVar3 = uVar6;
      uVar4 = uVar4 + 1;
      if (param_2 <= uVar4) {
        return;
      }
    } while (-1 < param_4);
  }
  if (uVar4 < param_2) {
    puVar7 = (undefined4 *)(param_1 + uVar4 * 4);
    param_2 = param_2 - uVar4;
    puVar1 = puVar7 + -1;
    if ((param_2 & 1) != 0) {
      *puVar7 = 0;
      param_2 = param_2 - 1;
      puVar1 = puVar7;
      if (param_2 == 0) {
        return;
      }
    }
    param_2 = param_2 >> 1;
    do {
      puVar1[1] = 0;
      puVar1 = puVar1 + 2;
      *puVar1 = 0;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

