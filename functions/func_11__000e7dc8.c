/*
 * Program: n42.bin
 * Function: func_11
 * Entry: 000e7dc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_11(void)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  if (B_ngasok != '\0') {
    uVar4 = (uint)irspsyn;
    if (uVar4 < 4) {
      uVar1 = uVar4 + 2;
    }
    else {
      uVar1 = uVar4 + 0xfc;
    }
    iVar2 = (uint)*(ushort *)(&DAT_005b933a + uVar4 * 2) -
            (uint)*(ushort *)(&DAT_005b933a + (uVar1 & 0xff) * 2);
    if (iVar2 < -0x8000) {
      iVar2 = -0x8000;
    }
    else if (0x7fff < iVar2) {
      iVar2 = 0x7fff;
    }
    drlas_w = (word)iVar2;
    iVar2 = 0;
    uVar3 = 0;
    do {
      iVar2 = iVar2 + *(int *)(&DAT_005b9d4c + (uVar4 & 0xff) * 4);
      if ((uVar4 & 0xff) == 0) {
        uVar4 = 5;
      }
      else {
        uVar4 = uVar4 + 0xff;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
    if (iVar2 >> 3 < 0x10000) {
      tas_w = (word)(iVar2 >> 3);
    }
    else {
      tas_w = 0xffff;
    }
    tas_w = FUN_000b181c(tas_w,0x333);
    uVar4 = (short)drlas_w * 0xf424;
    _DAT_003fabc4 = (short)(uVar4 >> 0x10);
    iVar2 = (int)_DAT_003fabc4;
    _DAT_003fabc4 = uVar4;
    rlgas_w = FUN_000a7b80(iVar2,uVar4 & 0xffff,tas_w);
  }
  return;
}

