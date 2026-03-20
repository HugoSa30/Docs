/*
 * Program: n42.bin
 * Function: FUN_0019f1fc
 * Entry: 0019f1fc
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019f1fc(void)

{
  ushort uVar2;
  uint uVar1;
  int iVar3;
  
  if ((B_kl15 == 0) && (B_vvtclose != 0)) {
    uVar2 = func_0xff2189bc(&DAT_001c5616,nmot_w);
    if (uVar2 <= exwinks_w) {
      exwinks_w = func_0xff2189bc(&DAT_001c5616,nmot_w);
    }
  }
  else {
    evhubs_w = _HUBSGNL;
    uVar1 = func_0xff2189bc(&KLHUBEX,_HUBSGNL);
    iVar3 = (uVar1 & 0xffff) + ((int)(short)Adexws >> 8);
    if (iVar3 < 0) {
      exwinks_w = 0;
    }
    else if (iVar3 < 0x10000) {
      exwinks_w = (word)iVar3;
    }
    else {
      exwinks_w = 0xffff;
    }
  }
  if (exwinks_w < 0x9f7) {
    exwinks = (byte)(exwinks_w / 10);
  }
  else {
    exwinks = 0xff;
  }
  if (B_nmin == '\0') {
    _DAT_003fac8c = _DAT_001c56bc;
  }
  else {
    if (_DAT_003fac8c == 0) {
      B_vvtclose = 0;
      return;
    }
    _DAT_003fac8c = _DAT_003fac8c + -1;
  }
  if (_DAT_003fac8c == 0) {
    B_vvtclose = 0;
    return;
  }
  return;
}

