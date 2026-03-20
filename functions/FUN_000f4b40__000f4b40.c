/*
 * Program: n42.bin
 * Function: FUN_000f4b40
 * Entry: 000f4b40
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f4b40(void)

{
  ushort uVar1;
  short sVar2;
  char cVar3;
  
  sVar2 = _DAT_003fc32e;
  if (DAT_003fc339 != '\0') {
    if (_DAT_003fc2e0 != 0) {
      *(ushort *)(_DAT_003fc2e8 + 0xc) = *(ushort *)(_DAT_003fc2e8 + 0xc) & 0xff0f;
      DAT_003fc33c = 0;
      *(ushort *)(_DAT_003fc2e4 + 8) = *(ushort *)(_DAT_003fc2e4 + 8) & 0xff | sVar2 << 8;
    }
    DAT_003fc339 = '\0';
    if (0x7e < sVar2) {
      _DAT_003fc2c4 = 0x64b3c;
      DAT_003fc339 = 0;
      return;
    }
  }
  uVar1 = *(ushort *)(_DAT_003fc2e8 + 0xc) >> 4 & 0xf;
  sVar2 = uVar1 - DAT_003fc33c;
  if ((char)sVar2 < '\0') {
    sVar2 = sVar2 + 0x10;
  }
  cVar3 = (char)sVar2;
  while ('\0' < cVar3) {
    (*(code *)&SUB_00066514)();
    if (*(code **)(_DAT_003fc2c0 + 4) != (code *)0x0) {
      (**(code **)(_DAT_003fc2c0 + 4))(3,10,0,0);
    }
    sVar2 = sVar2 + -1;
    cVar3 = (char)sVar2;
  }
  DAT_003fc33c = (char)uVar1;
  return;
}

