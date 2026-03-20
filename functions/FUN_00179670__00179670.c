/*
 * Program: n42.bin
 * Function: FUN_00179670
 * Entry: 00179670
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00179670(void)

{
  int iVar1;
  uint uVar2;
  
  mrfamx_w = func_0xff21984c(0x1c97ba,0xffff,nmot_w);
  DAT_005b9598 = func_0xff2189bc(&MRFUEMXN,nmot_w);
  if (DAT_005b9598 < mrfamx_w) {
    DAT_005b9598 = mrfamx_w;
  }
  if ((B_dash == '\0') &&
     (DAT_005b95a6 = func_0xff21afb0(&DAT_001d2220,_DAT_001ce9be,esst_sga08mdub,DAT_005b9c4c),
     DAT_005b95a8 = DAT_005b95a6, (DAT_001c9512 & 0x10) != 0)) {
    uVar2 = (uint)DAT_005b95a6 << 0xf;
    if (DAT_005b9572 != 0) {
      uVar2 = uVar2 / DAT_005b9572;
    }
    if (uVar2 == 0) {
      DAT_005b95a8 = 1;
    }
    else if (uVar2 < 0x10000) {
      DAT_005b95a8 = (ushort)uVar2;
    }
    else {
      DAT_005b95a8 = 0xffff;
    }
  }
  iVar1 = (esst_sga08mdub >> 0x10) * 2;
  DAT_005b956a = *(short *)(&DAT_001d1ece + iVar1) +
                 (short)((esst_sga08mdub & 0xffff) *
                         ((int)*(short *)(&DAT_001d1ed0 + iVar1) -
                         (int)*(short *)(&DAT_001d1ece + iVar1)) >> 0x10);
  _DAT_003fb3bc = func_0xff21afb0(&DAT_001d2280,_DAT_001ce9be,esst_sga08mdub,DAT_005b9c4c);
  _DAT_003fb3be = func_0xff21afb0(&DAT_001d1ef8,_DAT_001ce9be,esst_sga08mdub,DAT_005b9c4c);
  iVar1 = (esst_sga08mdub >> 0x10) * 2;
  DAT_005b956e = *(short *)(&DAT_001d1ede + iVar1) +
                 (short)((esst_sga08mdub & 0xffff) *
                         ((int)*(short *)(&DAT_001d1ee0 + iVar1) -
                         (int)*(short *)(&DAT_001d1ede + iVar1)) >> 0x10);
  _DAT_003fb3c0 = func_0xff21afb0(&DAT_001d208c,_DAT_001ce9be,esst_sga08mdub,DAT_005b9c4c);
  _DAT_003fb3c2 = func_0xff2189bc(&DAT_001d1eee,vfzg_w);
  return;
}

