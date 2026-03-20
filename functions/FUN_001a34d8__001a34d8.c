/*
 * Program: n42.bin
 * Function: FUN_001a34d8
 * Entry: 001a34d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a34d8(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  FUN_00109f08();
  (&UNK_003fae78)[param_1] = (&UNK_003fae78)[param_1] & 0xfe;
  DAT_003fae75 = DAT_003fae75 & ~(byte)(1 << (param_1 & 0x3f));
  uVar2 = 0;
  (&DAT_003faf08)[param_1] = 0;
  do {
    iVar3 = (uVar2 + param_1 * 0x10) * 2;
    (&UNK_003fae84)[iVar3] = 0xff;
    (&UNK_003fae85)[iVar3] = 0xff;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 0x10);
  uVar2 = 0;
  if (DAT_003fae70 != 0) {
    do {
      iVar3 = _DAT_003faf10 + uVar2 * 0x18;
      if (*(byte *)(iVar3 + 0x11) == param_1) {
        _7(iVar3 + 0xc);
        iVar3 = ((uint)*(byte *)(_DAT_003faf10 + uVar2 * 0x18 + 0x12) + param_1 * 0x10 & 0xff) * 2;
        (&UNK_003fae84)[iVar3] = (char)uVar2;
        (&UNK_003fae85)[iVar3] = 1;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < DAT_003fae70);
  }
  uVar2 = 0;
  if (DAT_003f9ac8 != 0) {
    do {
      iVar3 = uVar2 * 0x14;
      if (*(byte *)(_DAT_003faf14 + iVar3 + 0xd) == param_1) {
        _7(_DAT_003faf14 + iVar3 + 8);
        iVar1 = ((uint)*(byte *)(_DAT_003faf14 + iVar3 + 0xe) + param_1 * 0x10 & 0xff) * 2;
        (&UNK_003fae84)[iVar1] = *(undefined *)(_DAT_003faf14 + iVar3);
        (&UNK_003fae85)[iVar1] = 2;
      }
      uVar2 = uVar2 + 1 & 0xff;
    } while (uVar2 < DAT_003f9ac8);
  }
  return;
}

