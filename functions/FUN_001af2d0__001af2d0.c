/*
 * Program: n42.bin
 * Function: FUN_001af2d0
 * Entry: 001af2d0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001af2d0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((int)param_2 < 8) {
    uVar2 = 0xf << (param_2 << 2 & 0x3c);
    uVar1 = (*(uint *)(param_1 + 0x10) & uVar2) >> (param_2 << 2 & 0x3c) & 0xffff;
    if ((uVar1 != 0) && (uVar1 != param_3)) {
      if (_DAT_003fc364 != (code *)0x0) {
        (*_DAT_003fc364)(10,0x33,uVar1 << 8 | param_3);
      }
      return 0;
    }
    *(uint *)(param_1 + 0x10) =
         *(uint *)(param_1 + 0x10) & ~uVar2 | (param_3 & 0xf) << ((param_2 & 0xf) << 2);
  }
  else {
    uVar3 = param_2 * 4 - 0x20;
    uVar2 = 0xf << (uVar3 & 0x3f);
    uVar1 = (*(uint *)(param_1 + 0xc) & uVar2) >> (uVar3 & 0x3f) & 0xffff;
    if ((uVar1 != 0) && (uVar1 != param_3)) {
      if (_DAT_003fc364 != (code *)0x0) {
        (*_DAT_003fc364)(10,0x33,uVar1 << 8 | param_3);
      }
      return 0;
    }
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~uVar2 | (param_3 & 0xf) << (uVar3 & 0x3f)
    ;
  }
  return 1;
}

