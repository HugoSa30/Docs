/*
 * Program: n42.bin
 * Function: FUN_00133370
 * Entry: 00133370
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00133370(void)

{
  ushort uVar1;
  
  dpsuddr_w = 0;
  uVar1 = func_0xff21984c(&KFVHUBON,tmst,_kmstandold);
  if (_DAT_001c42cc < uVar1) {
    t_hubon = func_0xff21984c(&KFVHUBON,tmst,_kmstandold);
  }
  else {
    t_hubon = 0;
  }
  DAT_003fac4e = 0;
  t_wped = DAT_001c42e7;
  t_stend = DAT_001c42e4;
  B_gdhz = 0;
  S_VSGDVHUB = 0;
  t_rl = DAT_001c42e7;
  t_nmot = DAT_001c42e7;
  imlvhb_w = func_0xff21984c(&DAT_001c405c,tmst,_kmstandold);
  Ttvdpsrlvw = _TVDPSRLVW;
  _DAT_003fac40 = (uint)dpssoltdr_w;
  if ((short)dpssol_w < 0) {
    _DAT_003fac48 = 0;
  }
  else {
    _DAT_003fac48 = dpssol_w;
  }
  _DAT_003fac44 = (uint)_DAT_003fac48 << 0x10;
  dpssol_uw = _DAT_003fac48;
  dpssol_ub = (char)(_DAT_003fac48 >> 8);
  DAT_003fac4a = DAT_001c42e9;
  DAT_003fac4c = DAT_001c42e8;
  _DAT_003fac54 = rlvwvnsv_w;
  _DAT_003fac56 = 0;
  _DAT_003fac58 = rlvwvnst_w;
  _DAT_003fac5a = 0;
  return;
}

