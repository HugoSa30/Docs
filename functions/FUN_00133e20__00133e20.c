/*
 * Program: n42.bin
 * Function: FUN_00133e20
 * Entry: 00133e20
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00133e20(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = func_0xff22181c((udsu_w & 0x7ff) << 5,_DSUGRAD);
  uVar2 = (uVar2 & 0xffff) + (int)_DSUOFS;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  uVar1 = uVar2 & 0xffff;
  if ((((DAT_003fde95 & 1) == 0) && (_PUMN <= uVar1)) && (uVar1 <= _PUMX)) {
    B_hag = 1;
    pu_w = (word)uVar2;
    _DAT_003fae64 = (short)(uVar1 * 0x287 >> 10);
  }
  else {
    pu_w = _PUE;
    _DAT_003fae64 = (ushort)FHOE << 8;
  }
  if (pu_w < 0x7f81) {
    pu = (byte)((int)(uint)pu_w >> 7);
  }
  else {
    pu = 0xff;
  }
  uVar2 = (uint)pu_w * 0x287 >> 10;
  fho_w = (word)uVar2;
  fho = (byte)(uVar2 >> 8);
  frhol_w = 0x8000;
  _DAT_003fae60 = pu_w;
  pus_w = pu_w;
  uVar2 = func_0xff2189bc(&DAT_001d0c00,_ml_w);
  uVar2 = (uint)pu_w - (uVar2 & 0xffff);
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  else if (0xffff < (int)uVar2) {
    uVar2 = 0xffff;
  }
  pvdkdsu_w = (word)uVar2;
  pvdkds_w = (word)uVar2;
  pvdkds = (byte)((uVar2 & 0xffff) >> 8);
  uVar2 = (uVar2 & 0xffff) * 0x287 >> 10;
  fpvdkdsu_w = (word)uVar2;
  fpvdkds_w = fpvdkdsu_w;
  fpvdkds = (byte)(uVar2 >> 8);
  return;
}

