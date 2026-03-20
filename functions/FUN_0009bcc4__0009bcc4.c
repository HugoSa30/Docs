/*
 * Program: n42.bin
 * Function: FUN_0009bcc4
 * Entry: 0009bcc4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009bcc4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_MSR;
  
  uVar3 = (uint)(byte)(&DAT_00016acd)[param_1 * 3];
  if (_DAT_003fa10c == 0) {
    _DAT_003fa110 = in_MSR >> 0xf & 1;
  }
  _DAT_003fa10c = _DAT_003fa10c + 1;
  uVar2 = 1 << ((byte)(&DAT_00016ace)[param_1 * 3] & 0x3f);
  *(uint *)(&DAT_003fa444 + uVar3 * 4) = *(uint *)(&DAT_003fa444 + uVar3 * 4) | uVar2;
  *(uint *)(&DAT_003fa3c0 + uVar3 * 4) = *(uint *)(&DAT_003fa3c0 + uVar3 * 4) & ~uVar2;
  if (param_2 == 0) {
    *(uint *)(&DAT_003fa49c + uVar3 * 4) = *(uint *)(&DAT_003fa49c + uVar3 * 4) & ~uVar2;
  }
  else {
    *(uint *)(&DAT_003fa49c + uVar3 * 4) = *(uint *)(&DAT_003fa49c + uVar3 * 4) | uVar2;
  }
  iVar1 = uVar3 * 4;
  (**(code **)(uVar3 * 0x14 + 0x16b9c))
            (*(undefined4 *)(uVar3 * 0x14 + 0x16b98),
             *(uint *)(&DAT_003fa3c0 + iVar1) | *(uint *)(&DAT_003fa444 + iVar1),
             *(uint *)(&DAT_003fa444 + iVar1),*(undefined4 *)(&DAT_003fa49c + iVar1));
  _DAT_003fa10c = _DAT_003fa10c + -1;
  return 0;
}

