/*
 * Program: n42.bin
 * Function: FUN_000c218c
 * Entry: 000c218c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c218c(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  ushort local_20;
  
  uVar3 = (uint)fst_w;
  if (0xff < fst_w >> 8) {
    uVar3 = 0xffff;
  }
  uVar1 = FUN_000b17f4((uint)fns << 7,lamnswl_w);
  uVar3 = (uVar1 & 0xffff) * uVar3;
  local_20 = (ushort)(uVar3 >> 0x10);
  if (local_20 < 0x100) {
    uVar3 = uVar3 >> 8;
  }
  else {
    uVar3 = 0xffff;
  }
  uVar2 = FUN_000b1800((uint)fgru << 7,(uint)fwl * (uint)fwe);
  fvst_w = FUN_000b181c(uVar3 & 0xffff,uVar2);
  local_20 = (ushort)((uint)fvst_w * (uint)rlp_w >> 0x10);
  if (local_20 < 0x800) {
    uVar3 = (uint)fvst_w * (uint)rlp_w >> 0xb & 0xffff;
  }
  else {
    uVar3 = 0xffff;
  }
  iVar4 = (int)(short)rka_w + (int)(short)rkaco_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  uVar1 = FUN_000b1800(uVar3,_DAT_003fadd6);
  uVar1 = (uVar1 & 0xffff) + (int)(short)iVar4;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  uVar1 = (uVar1 & 0xffff) << 0xc;
  local_20 = (ushort)(uVar1 >> 0x10);
  uVar2 = FUN_000a7b40(local_20,uVar1 & 0xffff,lamsbg_w);
  uVar1 = FUN_000b1800(uVar2,fr_w);
  uVar1 = (uVar1 & 0xffff) + (int)(short)rkukg_w;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xffff < (int)uVar1) {
    uVar1 = 0xffff;
  }
  rkkva_w = FUN_000b1800(uVar1 & 0xffff,fra_w);
  iVar4 = (uint)rkkva_w - (int)(short)rkte_w;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xffff < iVar4) {
    iVar4 = 0xffff;
  }
  rk_w = (word)iVar4;
  iVar4 = (int)(short)rka2_w + (int)(short)rkaco_w;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  uVar3 = FUN_000b1800(uVar3,_DAT_003fadd8);
  uVar3 = (uVar3 & 0xffff) + (int)(short)iVar4;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  uVar3 = (uVar3 & 0xffff) << 0xc;
  local_20 = (ushort)(uVar3 >> 0x10);
  uVar2 = FUN_000a7b40(local_20,uVar3 & 0xffff,lamsbg2_w);
  uVar3 = FUN_000b1800(uVar2,fr2_w);
  uVar3 = (uVar3 & 0xffff) + (int)(short)rkukg_w;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  else if (0xffff < (int)uVar3) {
    uVar3 = 0xffff;
  }
  rkkva2_w = FUN_000b1800(uVar3 & 0xffff,fra2_w);
  iVar4 = (uint)rkkva2_w - (int)(short)rkte_w;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (0xffff < iVar4) {
    iVar4 = 0xffff;
  }
  rk2_w = (word)iVar4;
  return;
}

