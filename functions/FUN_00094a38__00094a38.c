/*
 * Program: n42.bin
 * Function: FUN_00094a38
 * Entry: 00094a38
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00094a38(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  
  if (_DAT_003fa1c4 == -1) {
    uVar1 = 0x94;
  }
  else {
    uVar5 = 0;
    do {
      iVar2 = *(int *)(&DAT_003fa1c8 + uVar5 * 4);
      puVar3 = (uint *)(iVar2 + 8);
      *puVar3 = *puVar3 & 0xfffffffe;
      iVar4 = 200;
      do {
        if ((*(uint *)(iVar2 + 8) & 0x80000000) == 0) break;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (iVar4 == 0) {
        return 0x92;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
    FUN_000945a8();
    DAT_003fa17a = 0;
    uVar5 = 0;
    do {
      puVar3 = *(uint **)(&DAT_003fa1c8 + uVar5 * 4);
      if ((puVar3[2] & 0x20) == 0) {
        return 0x87;
      }
      if (param_1 == 0) {
        *puVar3 = *puVar3 & 0xffffff00;
        puVar3[2] = _DAT_003fa1d0;
        DAT_003fa17a = 2;
      }
      else if (param_1 == 1) {
        *puVar3 = *puVar3 & 0xffffff00;
        puVar3[2] = _DAT_003fa1f0;
        DAT_003fa17a = 1;
      }
      else if ((param_1 == 2) || (param_1 == 3)) {
        return 0x93;
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
    uVar1 = 0;
  }
  return uVar1;
}

