/*
 * Program: n42.bin
 * Function: FUN_000d803c
 * Entry: 000d803c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d803c(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  
  DAT_005b93a2 = FUN_000b1800((uint)etazwbm * (uint)etalab,0xd1b7);
  uVar2 = FUN_000a7f20((uint)DAT_003faca0 << 8,DAT_005b93a2,_DAT_003faca4,_DAT_003faca4 & 0xffff);
  _DAT_003faca4 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = _DAT_003faca4;
  DAT_005b93a0 = _DAT_003faca4;
  _DAT_003faca4 = uVar2;
  DAT_005b93a4 = FUN_000a7b40(milsol_w,0,uVar1);
  uVar3 = calc_value_from_x_y(&DAT_001c56cc,nmot_w,DAT_005b93a4);
  if (B_sa == '\0') {
    DAT_005b93a6 = (short)((int)((int)(short)((ushort)DAT_003fac9e - (ushort)DAT_003fac9c) *
                                (uint)dpsfak) >> 3) + (ushort)DAT_003fac9c * 0x20;
    if ((short)DAT_005b93a6 < 0) {
      DAT_005b93a6 = 0;
    }
  }
  else {
    DAT_005b93a6 = (short)((int)((int)(short)((ushort)DAT_003fac9f - (ushort)DAT_003fac9d) *
                                (uint)dpsfak) >> 3) + (ushort)DAT_003fac9d * 0x20;
    if ((short)DAT_005b93a6 < 0) {
      DAT_005b93a6 = 0;
    }
  }
  uVar4 = (uint)rlsol_w;
  DAT_005b93a8 = rlsol_w;
  if (uVar3 < DAT_005b87b2) {
    if (DAT_005b93a6 < uVar3) {
      DAT_003fbf7f = 0;
      rlsol_w = uVar3;
    }
    else {
      rlsol_w = DAT_005b93a6;
      DAT_003fbf7f = 1;
    }
  }
  else {
    rlsol_w = DAT_005b87b2;
  }
  iVar5 = rlsol_w - uVar4;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  drlsol_w = (word)iVar5;
  return;
}

