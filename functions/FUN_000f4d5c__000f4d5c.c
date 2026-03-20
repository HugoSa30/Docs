/*
 * Program: n42.bin
 * Function: FUN_000f4d5c
 * Entry: 000f4d5c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_000f4d5c(void)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = 0;
  bVar3 = (byte)((ushort)*_DAT_003fc2e4 >> 8);
  if (*_DAT_003fc2e4 < 0) {
    bVar3 = bVar3 & 0x7f;
  }
  else {
    iVar2 = (int)(char)bVar3;
    bVar3 = 2;
  }
  _DAT_003fc32c = (short)(char)bVar3;
  if (((bVar3 != 5) && (*_DAT_003fc2c0 != (code *)0x0)) &&
     (cVar1 = (**_DAT_003fc2c0)(3,bVar3,iVar2), cVar1 != '\0')) {
    _DAT_003fc32c = 0;
  }
  return bVar3;
}

