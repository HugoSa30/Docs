/*
 * Program: n42.bin
 * Function: FUN_000d8604
 * Entry: 000d8604
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000d8700) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d8604(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  
  if (B_stend == '\0') {
    fwl = 0x80;
  }
  else {
    uVar1 = calc_vanos_optimal(&KFFWLW,DAT_001c1044,esst_snm12esub,esst_srl12esub);
    uVar3 = (uint)DAT_003fadd4;
    uVar2 = calc_vanos_optimal(&KFFWLWVT,DAT_001c1044,esst_snm12esub,esst_srl12esub);
    iVar4 = (uint)DAT_003fadd5 * (uVar2 & 0xff);
    uVar1 = ((int)(short)(((short)(uVar3 * (uVar1 & 0xff) >> 8) - (short)((uint)iVar4 >> 8)) *
                         (ushort)dpsfak) >> 8) + (iVar4 >> 8);
    if ((short)uVar1 < 0x100) {
      if ((short)uVar1 < 0) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xff;
    }
    uVar1 = (uVar1 & 0xff) + 0x80;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    fwl = (byte)uVar1;
  }
  if ((B_stend == '\0') || (B_lawlon == '\0')) {
    if (B_lawlon == '\0') {
      _DAT_003fadd0 = (uint)lamns_w << 0x10;
    }
    else {
      _DAT_003fadd0 = (uint)lamwl_w << 0x10;
    }
  }
  else {
    _DAT_003fadd0 = FUN_000a7f20(_ZKLANSWL,lamwl_w,_DAT_003fadd0,_DAT_003fadd0 & 0xffff);
  }
  if (_DAT_003fadd0 < 0x1001) {
    uVar5 = 0x1000 - _DAT_003fadd0;
  }
  else {
    uVar5 = _DAT_003fadd0 - 0x1000;
  }
  if ((uint)uVar5 < (uint)DLAMNSWL << 4) {
    lamnswl_w = 0x1000;
  }
  else {
    lamnswl_w = _DAT_003fadd0;
  }
  return;
}

