/*
 * Program: n42.bin
 * Function: FUN_00127be8
 * Entry: 00127be8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00127be8(void)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar1 = false;
  if ((DAT_00ffe1c6 | DAT_00ffe1c7) == 0) {
    iVar5 = 0x80;
  }
  else if ((DAT_00ffe186 | DAT_00ffe187) == 0) {
    iVar5 = 0x40;
  }
  else {
    bVar1 = (DAT_00ffe146 | DAT_00ffe147) != 0;
    iVar5 = 0;
  }
  _DAT_003fe974 = *(ushort *)(iVar5 + 0xffe140);
  uVar2 = *(ushort *)(iVar5 + 0xffe142);
  uVar3 = *(ushort *)(iVar5 + 0xffe144);
  if (bVar1) {
    if (((_DAT_003fe974 & uVar2 & uVar3) == 0xffff) && ((DAT_00ffe146 & DAT_00ffe147) == 0xff)) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
    if (((uVar2 != _DAT_003fe974) && (_DAT_003fe974 != uVar3)) &&
       (_DAT_003fe974 = uVar2, uVar2 != uVar3)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

