/*
 * Program: n42.bin
 * Function: FUN_0009da60
 * Entry: 0009da60
 * Exported by: ExportAllDecompiledFunctions.java
 */


int FUN_0009da60(int param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  short sVar5;
  int iVar4;
  short *psVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_2 * 4 + 0xec02);
  if (((bVar1 & 1) == 0) || (DAT_003fa178 == '\0')) {
    if (((bVar1 & 2) != 0) && (DAT_003fa178 != '\0')) {
      iVar7 = *(int *)(param_2 * 8 + 0xebf8);
      psVar6 = (short *)(iVar7 + -2);
      sVar5 = FUN_0009d6e4(param_2 & 0xffff,iVar7);
      if (sVar5 == *psVar6) {
        return iVar7;
      }
      (&UNK_003fa134)[param_2] = (&UNK_003fa134)[param_2] | 8;
    }
    if ((param_1 == 0) || (param_1 == 1)) {
      uVar2 = param_2 & 0xffff;
      uVar3 = param_2;
      while (uVar2 == 0) {
        iVar7 = (uVar3 & 0xffff) * 4;
        if (*(int *)(&UNK_003fa130 + iVar7) == 0) {
          (&UNK_003fa134)[uVar3 & 0xffff] = (&UNK_003fa134)[uVar3 & 0xffff] | 0x40;
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0009d8d8(uVar3 & 0xffff,param_3);
        }
        if (iVar4 != 0) {
          return iVar4 + 8;
        }
        bVar1 = *(byte *)(iVar7 + 0xec02);
        if (((bVar1 & 0x80) == 0) || (0x3f < (bVar1 & 0x40))) break;
        param_3 = FUN_0009cdd4(uVar3 & 0xffff,param_3);
        uVar2 = uVar3 + 1 & 0xffff;
        uVar3 = uVar3 + 1;
      }
    }
    iVar7 = *(int *)(param_2 * 8 + 0xebfc);
  }
  else {
    iVar7 = *(int *)(param_2 * 8 + 0xebf8);
  }
  return iVar7;
}

