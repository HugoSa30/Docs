/*
 * Program: n42.bin
 * Function: FUN_000e1150
 * Entry: 000e1150
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1150(void)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  FUN_000e0cf8();
  if (Disa_lern == 0) {
    Disolakt = (ushort)Sollwert << 7;
    if ((uint)_Disa_uma < (uint)Disa_spg) {
      uVar1 = _DAT_001cf4d8;
      if (B_disalern != '\0') {
        uVar1 = _DAT_001cf4d6;
      }
      uVar4 = (((uint)Disa_spg - (uint)_Disa_uma) * 0x8000) / (uint)uVar1;
      if (uVar4 < 0x8001) {
        DAT_005b878e = (ushort)uVar4;
      }
      else {
        DAT_005b878e = 0x8000;
      }
    }
    else {
      DAT_005b878e = 0;
    }
  }
  else {
    FUN_000e0e20();
    DAT_005b878e = Disa_spg << 5;
  }
  if (Disa_lern == 0) {
    if ((uint)Disolakt < (uint)_DAT_001cf4e8) {
      Disolakt = _DAT_001cf4e8;
    }
    else if ((int)(0x8000 - (uint)_DAT_001cf4e8) < (int)(uint)Disolakt) {
      Disolakt = 0x8000 - _DAT_001cf4e8;
    }
  }
  iVar3 = (uint)Disolakt - (uint)DAT_005b878e;
  if ((int)(uint)_DAT_001cf4e4 < iVar3) {
    DAT_005b8798 = _DAT_001cf4e4;
  }
  else if (iVar3 < (int)-(uint)_DAT_001cf4e4) {
    DAT_005b8798 = -_DAT_001cf4e4;
  }
  else {
    DAT_005b8798 = (ushort)iVar3;
  }
  uVar4 = (uint)(short)DAT_005b8798;
  if ((int)uVar4 < 1) {
    uVar4 = -uVar4;
  }
  if ((uint)_DAT_001cf4ea < (uVar4 & 0xffff)) {
    sVar2 = FUN_000b5534(0x1c260,0x1c240);
    uVar4 = FUN_000a87cc(&KLDISATVUB,ub);
    iVar3 = (int)((int)sVar2 * (uVar4 & 0xff)) >> 7;
    if (iVar3 < 0x8000) {
      if (iVar3 < -0x7fff) {
        Disaaus_w = 0x8001;
      }
      else {
        Disaaus_w = (word)iVar3;
      }
    }
    else {
      Disaaus_w = 0x7fff;
    }
    iVar3 = (int)(short)Disaaus_w;
    if (iVar3 < 0) {
      DAT_005b8782 = DAT_003fab8e;
      FUN_000e2a70(iVar3 * -5000 >> 0xe & 0xffff,DAT_003fab8e);
    }
    else if (iVar3 == 0) {
      FUN_000e2a70(0,DAT_005b8782);
    }
    else {
      DAT_005b8782 = DAT_003fab8d;
      FUN_000e2a70(iVar3 * 5000 >> 0xe & 0xffff,DAT_003fab8d);
    }
  }
  else {
    FUN_000e2a70(0,0);
  }
  return;
}

