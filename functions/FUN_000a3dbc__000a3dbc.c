/*
 * Program: n42.bin
 * Function: FUN_000a3dbc
 * Entry: 000a3dbc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a3dbc(int param_1,int param_2,int param_3,int param_4,undefined *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint in_MSR;
  
  if (param_1 < 0x80) {
    uVar5 = 0;
    *param_5 = 5;
  }
  else {
    uVar1 = param_1 + 0xff80U & 0xffff;
    uVar4 = (uint)*(byte *)(uVar1 * 5 + 0x170b0);
    if (param_3 < (int)uVar4) {
      uVar5 = 0;
      *param_5 = 6;
    }
    else {
      if (_DAT_003fa10c == 0) {
        _DAT_003fa110 = in_MSR >> 0xf & 1;
      }
      _DAT_003fa10c = _DAT_003fa10c + 1;
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          if (param_2 == 0) {
            iVar3 = (uVar1 + uVar2) * 6;
            *(undefined2 *)(param_4 + uVar2 * 2) = *(undefined2 *)(&DAT_005baa32 + iVar3);
            (&DAT_005baa34)[iVar3] = (&DAT_005baa34)[iVar3] | 4;
          }
          else {
            *(undefined2 *)(param_4 + uVar2 * 2) =
                 *(undefined2 *)(&DAT_005baa30 + (uVar1 + uVar2) * 6);
          }
          uVar2 = uVar2 + 1 & 0xff;
        } while (uVar2 < uVar4);
      }
      *param_5 = (&DAT_005baa34)[uVar1 * 6];
      _DAT_003fa10c = _DAT_003fa10c + -1;
      uVar5 = 1;
    }
  }
  return uVar5;
}

