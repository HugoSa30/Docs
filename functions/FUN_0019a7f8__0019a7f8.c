/*
 * Program: n42.bin
 * Function: FUN_0019a7f8
 * Entry: 0019a7f8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019a7f8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_003fb360 + (uint)DAT_003fb364;
  if (B_koe == '\0') {
    mdko = 0;
  }
  else if (DAT_003fb365 == '\0') {
    if (uVar2 < 0x100) {
      _DAT_003fb358 = (short)uVar2 * 0x100;
    }
    else {
      _DAT_003fb358 = -1;
    }
  }
  else {
    _DAT_003fb358 = func_0xff217fe8((uint)DAT_001c8a3e << 8,DAT_003fb360,_DAT_003fb358);
    mdko = (byte)((ushort)_DAT_003fb358 >> 9);
  }
  DAT_003fb365 = B_koe;
  if (B_acres == '\0') {
    dmrac = 0;
  }
  else {
    dmrac = (byte)((int)uVar2 >> 1);
  }
  if (B_gen1 == '\0') {
    mdgen_w = 0;
  }
  else if (B_gene == 0) {
    mdgen_w = 0;
  }
  else if (DAT_003fb366 == '\0') {
    _DAT_003fb35c = (uint)_DAT_003fb362 << 0x10;
  }
  else {
    uVar2 = func_0xff217f20((uint)DAT_001c8a3d << 8,_DAT_003fb362,_DAT_003fb35c,
                            _DAT_003fb35c & 0xffff);
    _DAT_003fb35c = (word)(uVar2 >> 0x10);
    mdgen_w = _DAT_003fb35c;
    _DAT_003fb35c = uVar2;
  }
  mdgen = (byte)(mdgen_w >> 8);
  DAT_003fb366 = B_gene;
  if ((B_sl == '\0') || (CWMDSL != '\0')) {
    uVar2 = (uint)mdko * 0x100 + (uint)mdgen_w;
  }
  else {
    uVar2 = (uint)mdko * 0x100 + (uint)mdgen_w + (uint)DAT_001c8a3c * 0x80 + (uint)mdarsp_w;
  }
  if (CWMDSL != '\0') {
    uVar1 = func_0xff2191ac(_KLMDSL,&DAT_001d1c40,&DAT_001d1c52,(int)(short)lws_w);
    uVar2 = uVar2 + (uVar1 & 0xffff);
  }
  if (0xffff < uVar2) {
    uVar2 = 0xffff;
  }
  mdverb_w = (word)uVar2;
  mdverb = (byte)(uVar2 >> 8);
  return;
}

