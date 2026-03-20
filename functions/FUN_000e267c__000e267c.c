/*
 * Program: n42.bin
 * Function: FUN_000e267c
 * Entry: 000e267c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e267c(void)

{
  word wVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  
  B_wf = B_nswo2 == '\0';
  if (B_st == '\0') {
    if (((DAT_003fada9 == '\0') && (B_ll == '\0')) || (DAT_003fada8 == '\0')) {
      B_ukns = 1;
    }
  }
  else {
    B_ukns = 0;
  }
  wVar1 = rlsol_w;
  if (ESUKRLP == '\x01') {
    wVar1 = rlp_w;
  }
  uVar2 = FUN_000b17f4(_FUKE,wVar1);
  uVar3 = FUN_000a7f20(_ZUKE,uVar2 & 0xffff,_DAT_003fada4,_DAT_003fada4 & 0xffff);
  _DAT_003fada4 = (ushort)((uint)uVar3 >> 0x10);
  drkuke_w = _DAT_003fada4;
  iVar6 = (uVar2 & 0xffff) - (uint)_DAT_003fada4;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  rkuke_w = (word)iVar6;
  uVar2 = (uint)dpsfak;
  iVar6 = (int)(((int)(short)rkukdk_w - (int)(short)rkuk_w) * uVar2) / 0xff + (int)(short)rkuk_w;
  if (iVar6 < -0x8000) {
    rkukdps_w = 0x8000;
  }
  else if (iVar6 < 0x8000) {
    rkukdps_w = (word)iVar6;
  }
  else {
    rkukdps_w = 0x7fff;
  }
  B_va = (undefined)(((uint)(byte)(((short)rkukdps_w < -8) << 3) << 8) >> 0xb);
  B_ba = (undefined)(((uint)(byte)((8 < (short)rkukdps_w) << 2) << 8) >> 10);
  iVar6 = (int)(((int)_DAT_003fadb2 - (int)_DAT_003fadae) * uVar2) / 0xff + (int)_DAT_003fadae;
  if (iVar6 < -0x8000) {
    iVar6 = -0x8000;
  }
  else if (0x7fff < iVar6) {
    iVar6 = 0x7fff;
  }
  iVar5 = (int)(((int)_DAT_003fadb4 - (int)_DAT_003fadb0) * uVar2) / 0xff + (int)_DAT_003fadb0;
  if (iVar5 < -0x8000) {
    iVar5 = -0x8000;
  }
  else if (0x7fff < iVar5) {
    iVar5 = 0x7fff;
  }
  B_vag = (short)rkukdps_w < (short)iVar6;
  B_bag = (short)iVar5 < (short)rkukdps_w;
  _DAT_003fada4 = uVar3;
  uVar4 = FUN_000a90c8(ZKRLSOLVT,&DAT_001c61e7,0x1c61ee,nmot);
  _DAT_003fadb8 = FUN_000a7f20(uVar4,rlsol_w,_DAT_003fadb8,_DAT_003fadb8 & 0xffff);
  uVar3 = _DAT_003fadb8;
  _DAT_003fadb8 = (word)(_DAT_003fadb8 >> 0x10);
  rlsolfvt_w = _DAT_003fadb8;
  drlsolvt_w = (short)(_DAT_003fadb8 - _DAT_003fadb6) >> 1;
  _DAT_003fadb6 = _DAT_003fadb8;
  _DAT_003fadb8 = uVar3;
  return;
}

