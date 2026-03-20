/*
 * Program: n42.bin
 * Function: FUN_000b7268
 * Entry: 000b7268
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7268(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  
  if (B_mdstop == 0) {
    fVar2 = _fse_f;
    if (B_fokstp != 0) {
      fVar2 = _DAT_0001bd34;
    }
    _lutsk_f = _luts_f - fVar2;
    iVar4 = (int)(char)zzyllfb;
    *(float *)(&UNK_003fa8b0 + iVar4 * 4) = _lutsk_f;
    _flutsk_f = _fluts_f - fVar2;
    *(float *)(&flutskzy_f + iVar4 * 4) = _flutsk_f;
    fVar1 = *(float *)(&UNK_003fa894 + (uint)fsed_ind * 4);
    _fsenmz2_f = fVar1;
    *(float *)(&UNK_003fa894 + (uint)fsed_ind * 4) = fVar2;
    uVar3 = fsed_ind + 1;
    if (0xff < uVar3) {
      uVar3 = 0xff;
    }
    fsed_ind = (byte)uVar3;
    if ((uint)fsed_len <= (uVar3 & 0xff)) {
      fsed_ind = 0;
    }
    _dlutsk_f = _dluts_f - (fVar1 - fVar2);
  }
  return;
}

