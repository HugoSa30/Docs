/*
 * Program: n42.bin
 * Function: FUN_0016f6f8
 * Entry: 0016f6f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x0016f85c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016f6f8(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  abakdk = func_0xff21ae98(&KFABAKDK,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  avakdk = func_0xff21ae98(&KFAVAKDK,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  if (B_st == '\0') {
    fbansdk_w = func_0xff217fe8(_TNSUUKA,0x20,fbansdk_w);
    fbansdk = (byte)(fbansdk_w >> 8);
  }
  else {
    uVar1 = func_0xff2187cc(&FUKNSTMDK,tmst);
    uVar2 = func_0xff2187cc(&FUKNSTHOD,fho);
    iVar3 = (uVar1 & 0xff) * (uVar2 & 0xff);
    fbansdk_w = (word)iVar3;
    fbansdk = (byte)((uint)iVar3 >> 8);
  }
  uVar1 = fbansdk - 0x20;
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  uVar1 = (int)((uVar1 & 0xff) * (uint)FVANSTDK) >> 7;
  if (uVar1 < 0xdf) {
    uVar1 = (uVar1 & 0xff) + 0x20;
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    fvansdk = (byte)uVar1;
  }
  else {
    fvansdk = 0xff;
  }
  uVar1 = func_0xff21ae98(&KFVAKL,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  fvakldk_w = (word)((int)((uVar1 & 0xff) * (uint)fvansdk) >> 2);
  uVar1 = func_0xff21ae98(&KFBAKL,DAT_001ce8cc,esst_stm09esub,esst_snm07esub);
  fbakldk_w = (word)((int)((uVar1 & 0xff) * (uint)fbansdk) >> 2);
  return;
}

