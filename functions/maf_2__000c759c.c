/*
 * Program: n42.bin
 * Function: maf_2
 * Entry: 000c759c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void maf_2(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_00099c74(1);
  if ((uVar2 & 0xffff0000) == 0) {
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0;
  }
  uVar1 = uVar2 >> 1;
  uhfm_w = (word)uVar1;
  if ((DAT_003fae1c & 1) == 0) {
    _DAT_003fb068 = _DAT_003fb068 + uVar2;
    _DAT_003fb070 = _DAT_003fb070 + uVar2 * uVar2;
    if (uVar1 == 0) {
      uVar2 = (uint)_MLHFM;
    }
    else if (uVar1 < 0x200) {
      uVar2 = (uint)*(ushort *)(&MLHFM + (uVar2 & 0xfffffffe));
    }
    else {
      uVar2 = (uint)_DAT_001c78b8;
    }
    _mlhfma_w = (undefined2)uVar2;
    _DAT_003fb060 = _DAT_003fb060 + uVar2;
    _DAT_003fb078 = _DAT_003fb078 + 1;
  }
  else {
    _DAT_003fb06c = _DAT_003fb06c + uVar2;
    _DAT_003fb074 = _DAT_003fb074 + uVar2 * uVar2;
    if (uVar1 == 0) {
      uVar2 = (uint)_MLHFM;
    }
    else if (uVar1 < 0x200) {
      uVar2 = (uint)*(ushort *)(&MLHFM + (uVar2 & 0xfffffffe));
    }
    else {
      uVar2 = (uint)_DAT_001c78b8;
    }
    _mlhfma_w = (undefined2)uVar2;
    _DAT_003fb064 = _DAT_003fb064 + uVar2;
    _DAT_003fb07a = _DAT_003fb07a + 1;
  }
  uVar2 = FUN_00099c74(6);
  if ((uVar2 & 0xffff0000) == 0) {
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0;
  }
  udkp1_w = (word)(uVar2 << 2);
  uVar2 = FUN_00099c74(7);
  if ((uVar2 & 0xffff0000) == 0) {
    uVar2 = uVar2 & 0xffff;
  }
  else {
    uVar2 = 0;
  }
  udkp2_w = (word)(uVar2 << 2);
  uVar2 = FUN_00099c74(8);
  if ((uVar2 & 0xffff0000) == 0) {
    udkp1v_w = (word)uVar2;
  }
  else {
    udkp1v_w = 0;
  }
  FUN_000c7298();
  uVar2 = FUN_00099c74(0x16);
  if ((uVar2 & 0xffff0000) == 0) {
    uddss_w = (word)uVar2;
  }
  else {
    uddss_w = 0;
  }
  uVar2 = FUN_00099c74(0x1c);
  if ((uVar2 & 0xffff0000) == 0) {
    uuptes_w = (word)uVar2;
  }
  else {
    uuptes_w = 0;
  }
  return;
}

