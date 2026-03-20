/*
 * Program: n42.bin
 * Function: FUN_00192da8
 * Entry: 00192da8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00192da8(void)

{
  undefined4 uVar1;
  char cVar3;
  int iVar2;
  
  if (TVKURU == 0) {
    dnvquot_w = 0;
  }
  else {
    if (TVKURU < 6) {
      cVar3 = -TVKURU;
    }
    else {
      cVar3 = -5;
    }
    cVar3 = DAT_003faaf8 + cVar3;
    if (cVar3 < '\0') {
      cVar3 = cVar3 + '\x05';
    }
    iVar2 = (uint)nvquot_w - (uint)*(ushort *)(&UNK_003faafa + cVar3 * 2);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    dnvquot_w = (word)iVar2;
  }
  *(word *)(&UNK_003faafa + (char)DAT_003faaf8 * 2) = nvquot_w;
  DAT_003faaf8 = DAT_003faaf8 + 1;
  if (4 < DAT_003faaf8) {
    DAT_003faaf8 = 0;
  }
  _DAT_003fab04 =
       func_0xff217f84(_ZKURU,(int)(short)dnvquot_w,(int)(short)_DAT_003fab04,_DAT_003fab04 & 0xffff
                      );
  uVar1 = _DAT_003fab04;
  _DAT_003fab04 = (word)(_DAT_003fab04 >> 0x10);
  dnvquotf_w = _DAT_003fab04;
  if (B_kuppl == '\0') {
    iVar2 = (esst_sga07mdub >> 0x10) * 2;
    B_kurn = (short)_DAT_003fab04 <
             (short)(*(short *)(&DAT_001c1c48 + iVar2) +
                    (short)((esst_sga07mdub & 0xffff) *
                            ((int)*(short *)(&DAT_001c1c4a + iVar2) -
                            (int)*(short *)(&DAT_001c1c48 + iVar2)) >> 0x10));
    iVar2 = (esst_sga07mdub >> 0x10) * 2;
    B_kurp = (short)(*(short *)(&DAT_001c1c56 + iVar2) +
                    (short)((esst_sga07mdub & 0xffff) *
                            ((int)*(short *)(&IKURUP + iVar2) -
                            (int)*(short *)(&DAT_001c1c56 + iVar2)) >> 0x10)) < (short)_DAT_003fab04
    ;
  }
  else {
    B_kurn = false;
    B_kurp = false;
  }
  _DAT_003fab04 = uVar1;
  return;
}

