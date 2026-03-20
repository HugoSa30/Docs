/*
 * Program: n42.bin
 * Function: FUN_0009bbb0
 * Entry: 0009bbb0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009bbb0(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint in_MSR;
  
  param_1 = param_1 * 8;
  bVar1 = *(byte *)(param_1 + 0x16b7d);
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  iVar2 = (uint)bVar1 * 4;
  uVar4 = (1 << (*(byte *)(param_1 + 0x16b7f) & 0x3f)) - 1;
  *(uint *)(&DAT_003fa49c + iVar2) =
       *(uint *)(&DAT_003fa49c + iVar2) & ~(uVar4 << (*(byte *)(param_1 + 0x16b7e) & 0x3f)) |
       (param_2 & uVar4) << (*(byte *)(param_1 + 0x16b7e) & 0x3f);
  iVar3 = (uint)bVar1 * 0x14;
  (**(code **)(iVar3 + 0x16ba4))
            (*(undefined4 *)(iVar3 + 0x16b98),*(undefined4 *)(&DAT_003fa444 + iVar2),
             *(undefined4 *)(&DAT_003fa49c + iVar2));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

