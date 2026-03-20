/*
 * Program: n42.bin
 * Function: FUN_001ab47c
 * Entry: 001ab47c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001ab47c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  ushort local_38;
  
  iVar5 = 0;
  *(undefined4 *)(&UNK_003fa378 + param_1 * 8) = param_3;
  *(undefined4 *)(&UNK_003fa37c + param_1 * 8) = param_4;
  uVar1 = (*(code *)&SUB_00016248)(*(undefined *)(param_2 * 3 + 0x175d5));
  uVar2 = uVar1 & 0xffff;
  local_38 = (ushort)(uVar1 >> 0x10);
  uVar1 = (uint)local_38;
  if (*(short *)(&UNK_003fa374 + param_1 * 2) != 0) {
    uVar6 = (uint)*(ushort *)(&UNK_003fa398 + param_1 * 2);
    if (uVar6 < uVar2) {
      uVar2 = uVar2 - uVar6;
    }
    else if (uVar2 < uVar6) {
      uVar2 = (uVar2 - uVar6) + 0x10000;
    }
    else {
      uVar2 = 0;
    }
    if (uVar6 < uVar1) {
      uVar1 = uVar1 - uVar6;
    }
    else if (uVar1 < uVar6) {
      uVar1 = (uVar1 - uVar6) + 0x10000;
    }
    else {
      uVar1 = 0;
    }
    uVar6 = (uint)_DAT_003fa3a8;
    if (*(char *)((param_2 & 0xff) * 3 + 0x175d6) == '\0') {
      iVar5 = 2;
    }
    else {
      iVar5 = 0x14;
    }
    uVar1 = ((uVar1 & 0xffff) * iVar5) / uVar6;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    *param_5 = (short)uVar1;
    iVar5 = (uVar1 & 0xffff) * uVar6;
    if (*(char *)((param_2 & 0xff) * 3 + 0x175d6) == '\0') {
      iVar3 = 2;
    }
    else {
      iVar3 = 0x14;
    }
    uVar6 = ((uVar2 & 0xffff) * iVar3) / uVar6;
    if (uVar6 < 0x10000) {
      uVar4 = (undefined2)uVar6;
    }
    else {
      uVar4 = 0xffff;
    }
    param_5[1] = uVar4;
  }
  *(ushort *)(&UNK_003fa398 + param_1 * 2) = local_38;
  return iVar5;
}

