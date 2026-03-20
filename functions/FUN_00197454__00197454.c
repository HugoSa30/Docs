/*
 * Program: n42.bin
 * Function: FUN_00197454
 * Entry: 00197454
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00197454(void)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  byte bStack_f;
  byte bStack_b;
  
  uVar2 = _B_sipddss;
  uVar1 = _TYP_ddss;
  iVar4 = (int)_DDSSOFS;
  uVar3 = func_0xff22167c(uddssm_w,_DDSSGRAD);
  iVar4 = (uVar3 >> 9) + iVar4;
  if (iVar4 < -0x8000) {
    iVar4 = -0x8000;
  }
  else if (0x7fff < iVar4) {
    iVar4 = 0x7fff;
  }
  dpsad_w = (word)iVar4;
  bStack_f = (byte)uVar1;
  if (((bStack_f >> 6 & 1) == 0) && (bStack_b = (byte)uVar2, (bStack_b >> 6 & 1) == 0)) {
    dps_w = dpsd_w;
  }
  else {
    dps_w = _DAT_001c7954;
  }
  dpsddss_w = dps_w;
  return;
}

