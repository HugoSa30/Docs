/*
 * Program: n42.bin
 * Function: FUN_00179f5c
 * Entry: 00179f5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00179f5c(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  ub_tmp = (word)ub;
  taml_tmp = (word)taml;
  i_elupwm = func_0xff21984c(&KFELUPWM,taml,vfzg_tmp);
  vfzg_tmp = (word)vfzg;
  faktubel = func_0xff2189bc(&DAT_001c9cbc,ub_tmp);
  i_eluvfzg = (word)((uint)i_elupwm * (uint)faktubel >> 7);
  tans_tmp = (word)tans;
  fakttansel = func_0xff2189bc(&DAT_001c9ca2,tans);
  uVar3 = (uint)i_eluvfzg * (uint)fakttansel >> 7;
  i_eluefter = (word)uVar3;
  if (0x800 < (uVar3 & 0xffff)) {
    i_eluefter = 0x800;
  }
  iVar1 = vvt_es - 0x7f;
  iVar2 = vvt_es2 - 0x7f;
  if ((short)iVar1 < 1) {
    iVar1 = -iVar1;
  }
  if ((short)iVar2 < 1) {
    iVar2 = -iVar2;
  }
  iVar1 = iVar1 + iVar2 + 0x7f;
  vvt_ib1_2 = (word)iVar1;
  if ((vvt_es == 0xff) || (vvt_es2 == 0xff)) {
    uVar3 = (uint)DAT_001c9cdd;
  }
  else {
    uVar3 = iVar1 + (uint)DAT_001c9cde + 0xff81;
  }
  vvt_iges = (short)(uVar3 << 3) - 0x3f8;
  if ((short)vvt_iges < 0) {
    vvt_iges = 0;
  }
  if (B_slp == '\0') {
    i_slp = 0;
  }
  else {
    i_slp = func_0xff2190c8(DAT_001c9cd2,&DAT_001c9cd3,0x1c9cd6,ub_tmp & 0xff);
  }
  i_elu_vvt = i_eluefter + vvt_iges;
  if (B_kl15 == 0) {
    uVar3 = 0x3f8;
  }
  else {
    uVar3 = (uint)(ushort)(i_eluefter + vvt_iges) + (uint)i_slp + (uint)DAT_001c9cdc * 8;
  }
  uVar3 = uVar3 >> 4;
  if (0x13d < uVar3) {
    uVar3 = 0x13e;
  }
  iVar1 = uVar3 - 0x40;
  if ((short)iVar1 < 0) {
    iVar1 = 0;
  }
  st_craweng = (byte)iVar1;
  return;
}

