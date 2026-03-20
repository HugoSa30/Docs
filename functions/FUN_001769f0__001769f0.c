/*
 * Program: n42.bin
 * Function: FUN_001769f0
 * Entry: 001769f0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001769f0(void)

{
  undefined2 uVar2;
  uint uVar1;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_001d0f40 & 1) == 0) {
    DAT_005b8968 = mifa_w;
  }
  else {
    uVar4 = (uint)(mifa_w >> 1) - (int)(short)dmllri_w;
    if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    else if (0xffff < (int)uVar4) {
      uVar4 = 0xffff;
    }
    if ((uVar4 & 0xffff) < 0x7fff) {
      DAT_005b8968 = (short)uVar4 * 2;
    }
    else {
      DAT_005b8968 = 0xffff;
    }
  }
  if (B_fasla == '\0') {
    DAT_005b895e = 0;
  }
  else {
    DAT_005b895e = func_0xff21984c(&DAT_001d0f9e,nmot_w,DAT_005b8968);
  }
  if ((B_ll == '\0') || ((DAT_001d0f40 & 4) == 0)) {
    uVar2 = func_0xff21984c(&DAT_001d0fd2,nmot_w,DAT_005b8968);
    _DAT_003fb108 =
         func_0xff217f20((uint)DAT_001d0f56 << 8,uVar2,_DAT_003fb108,_DAT_003fb108 & 0xffff);
  }
  else {
    uVar2 = func_0xff21984c(&DAT_001d1076,nmot_w,DAT_005b8968);
    _DAT_003fb108 =
         func_0xff217f20((uint)DAT_001d0f56 << 8,uVar2,_DAT_003fb108,_DAT_003fb108 & 0xffff);
  }
  DAT_005b8960 = _DAT_003fb108;
  if (B_kh == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)_DAT_003fb104 * ((uint)DAT_005b9111 * (uint)_DAT_003fb108 >> 8);
    if (uVar4 < 0x40000000) {
      uVar4 = uVar4 >> 0xe;
    }
    else {
      uVar4 = 0xffff;
    }
  }
  if (B_kw == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = func_0xff21984c(0x1d0f6a,nmot_w,DAT_005b8968);
  }
  if ((DAT_001d0f40 & 2) == 0) {
    _DAT_003fb106 = 0xffff;
  }
  else {
    if (B_bkvleer == '\0') {
      uVar3 = 0xff;
    }
    else {
      uVar3 = 0;
    }
    _DAT_003fb106 = func_0xff217fe8((uint)DAT_001d0f55 << 8,uVar3,_DAT_003fb106);
  }
  DAT_005b895b = (char)(_DAT_003fb106 >> 8);
  if ((uVar1 & 0xffff) < (uVar4 & 0xffff)) {
    DAT_005b8962 = (undefined2)((uVar4 & 0xffff) * (uint)(_DAT_003fb106 >> 8) >> 8);
  }
  else {
    DAT_005b8962 = (undefined2)((uVar1 & 0xffff) * (uint)(_DAT_003fb106 >> 8) >> 8);
  }
  dmrkh = (byte)((ushort)DAT_005b8962 >> 8);
  return;
}

