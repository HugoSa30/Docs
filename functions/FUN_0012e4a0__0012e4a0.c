/*
 * Program: n42.bin
 * Function: FUN_0012e4a0
 * Entry: 0012e4a0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012e4a0(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  
  DAT_003fada8 = DAT_001c6291;
  DAT_003fada9 = DAT_001c6290;
  uVar2 = (int)((uint)nmot_w * (uint)FWFN) >> 7;
  if (uVar2 < 0x8000) {
    if ((int)uVar2 < -0x8000) {
      uVar2 = 0xffff8000;
    }
  }
  else {
    uVar2 = 0x7fff;
  }
  sVar3 = (short)uVar2;
  if (ESUKRLP == '\x01') {
    uVar2 = func_0xff2309d8(&WFRL,rlp_w,0x1a);
  }
  else {
    uVar2 = func_0xff2309d8(&WFRL,rlsol_w,0x1a);
  }
  iVar1 = (int)(short)((ushort)(uVar2 >> 1) & 0x7fff) + (int)sVar3;
  if (iVar1 < -0x8000) {
    iVar1 = -0x8000;
  }
  else if (0x7fff < iVar1) {
    iVar1 = 0x7fff;
  }
  wf_w = (word)iVar1;
  fbans_w = 0x2000;
  fbans = 0x20;
  drkakvt_w = 0;
  _DAT_003fadb6 = 0;
  return;
}

