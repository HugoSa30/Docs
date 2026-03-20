/*
 * Program: n42.bin
 * Function: FUN_000a3af0
 * Entry: 000a3af0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a3af0(int param_1,int param_2,uint param_3,int param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint in_MSR;
  
  if (param_1 < 0x80) {
    uVar3 = 0;
    *param_5 = 5;
  }
  else {
    if (_DAT_003fa10c == 0) {
      _DAT_003fa110 = in_MSR >> 0xf & 1;
    }
    _DAT_003fa10c = _DAT_003fa10c + 1;
    uVar1 = (uint)*(byte *)((param_1 + 0xff80U & 0xffff) * 5 + 0x170b0);
    if (param_3 == uVar1) {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          if (param_2 == 0) {
            iVar2 = (param_1 + (uVar4 & 0xff) + 0xff80 & 0xffff) * 6;
            *(undefined2 *)(&DAT_005baa32 + iVar2) = *(undefined2 *)(param_4 + (uVar4 & 0xff) * 2);
            (&DAT_005baa34)[iVar2] = (&DAT_005baa34)[iVar2] & 0xdf | 1;
          }
          else {
            iVar2 = (param_1 + (uVar4 & 0xff) + 0xff80 & 0xffff) * 6;
            *(undefined2 *)(&DAT_005baa30 + iVar2) = *(undefined2 *)(param_4 + (uVar4 & 0xff) * 2);
            (&DAT_005baa34)[iVar2] = (&DAT_005baa34)[iVar2] & 0xdb | 2;
          }
          uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xff) < uVar1);
      }
      *param_5 = (&DAT_005ba734)[param_1 * 6];
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      *param_5 = 6;
    }
    _DAT_003fa10c = _DAT_003fa10c + -1;
  }
  return uVar3;
}

