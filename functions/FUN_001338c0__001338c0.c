/*
 * Program: n42.bin
 * Function: FUN_001338c0
 * Entry: 001338c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x00133ba4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001338c0(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_005bb79d = DAT_001d0a89;
  DAT_005bb836 = _DAT_001d0b0a;
  DAT_005bb838 = _DAT_001d0b0a;
  DAT_005bb83a = _DAT_001d0b0e;
  uVar1 = func_0xff2187cc(&map_TMOTELI,wtmot);
  tmotlin = (byte)uVar1;
  DAT_005b88d2 = (undefined2)((uVar1 & 0xff) << 8);
  if (((B_pwf == '\0') && ((DAT_003fdfb7 & 1) == 0)) && ((DAT_003fde7d & 1) == 0)) {
    uVar1 = func_0xff2189bc(FUN_001d0b10,tabst_w);
  }
  else if ((DAT_003fdfb7 & 1) == 0) {
    uVar1 = (uint)tumg;
    if (uVar1 < DAT_001d0a4f) {
      uVar1 = (uint)DAT_001d0a4f;
    }
  }
  else {
    uVar1 = (uint)DAT_001d0a4e;
  }
  if ((uint)DAT_001d0a50 < (uVar1 & 0xff)) {
    uVar1 = (uint)DAT_001d0a50;
  }
  DAT_005b88c8 = (undefined)uVar1;
  _DAT_005bb8c4 = (uVar1 & 0xff) * 0x400 + -0x10000;
  uVar2 = (uint)tmotlin;
  if ((DAT_001d0a52 <= uVar2) && (uVar2 <= DAT_001d0a53)) {
    uVar1 = uVar2;
  }
  DAT_005b88ca = (byte)uVar1;
  DAT_005bb83c = (undefined2)((uVar1 & 0xff) << 8);
  tmst = DAT_005b88ca;
  tmot = DAT_005b88ca;
  DAT_005b88cc = func_0xff2187cc(&DAT_001d0a54,uVar1 & 0xff);
  if (DAT_005b88cc < DAT_001d0a51) {
    DAT_005b88cc = DAT_001d0a51;
  }
  DAT_005b88cb = tmst;
  if (DAT_005b88cc < tmst) {
    DAT_005b88cb = DAT_005b88cc;
  }
  DAT_005bb8c0 = (uint)DAT_005b88cb * 0x400 + -0x10000;
  if (B_nokatfz == '\0') {
    DAT_005b88d0 = func_0xff2190c8(DAT_001d0b1e,&DAT_001d0b1f,&DAT_001d0b24,tmst);
    DAT_005bb8bc = (uint)DAT_005b88d0 << 8;
  }
  else {
    DAT_005b88d0 = 0;
  }
  if (DAT_005b88d0 == 0) {
    DAT_005bb79c = 1;
    DAT_005bb828 = DAT_005bb828 | 1;
  }
  if (B_pwf != '\0') {
    tmotab = DAT_001d0a50;
    DAT_003fdc62 = DAT_001d0a50;
  }
  return;
}

