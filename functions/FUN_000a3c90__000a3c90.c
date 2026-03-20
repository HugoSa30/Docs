/*
 * Program: n42.bin
 * Function: FUN_000a3c90
 * Entry: 000a3c90
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000a3c90(int param_1,int param_2,int param_3,undefined2 *param_4,undefined *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_MSR;
  
  if (param_1 < 0x80) {
    uVar3 = 0;
    *param_5 = 5;
  }
  else {
    uVar1 = param_1 + 0xff80U & 0xff;
    if (param_3 < (int)(uint)*(byte *)(uVar1 * 5 + 0x170b0)) {
      if (_DAT_003fa10c == 0) {
        _DAT_003fa110 = in_MSR >> 0xf & 1;
      }
      _DAT_003fa10c = _DAT_003fa10c + 1;
      iVar2 = (uVar1 + param_3) * 6;
      if (param_2 == 0) {
        *(undefined2 *)(&DAT_005baa32 + iVar2) = *param_4;
      }
      else {
        *(undefined2 *)(&DAT_005baa30 + iVar2) = *param_4;
        (&DAT_005baa34)[iVar2] = (&DAT_005baa34)[iVar2] & 0xdb | 2;
      }
      uVar3 = 1;
      *param_5 = (&DAT_005baa34)[iVar2];
      _DAT_003fa10c = _DAT_003fa10c + -1;
    }
    else {
      uVar3 = 0;
      *param_5 = 7;
    }
  }
  return uVar3;
}

