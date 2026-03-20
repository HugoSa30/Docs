/*
 * Program: n42.bin
 * Function: FUN_00098294
 * Entry: 00098294
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098294(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x14;
  *(undefined *)(_DAT_003fae80 + iVar4 + 10) = 1;
  *(undefined *)(_DAT_003fae80 + iVar4 + 0xe) = 1;
  *(byte *)(_DAT_003fae80 + iVar4 + 0xf) = *(byte *)(_DAT_003fae80 + iVar4 + 0xf) | 0x10;
  iVar3 = _DAT_003faf10 + param_1 * 0x18;
  if ((*(char *)(iVar3 + 2) != -1) || ((*(byte *)(iVar3 + 1) & 1) != 0)) {
    cVar1 = *(char *)(iVar3 + 4);
    cVar2 = *(char *)(_DAT_003fae80 + iVar4 + 8);
    *(char *)(_DAT_003fae80 + iVar4 + 8) = cVar2 + '\x01';
    if (cVar2 == cVar1) {
      *(char *)(_DAT_003fae80 + iVar4 + 8) = cVar1;
      *(byte *)(_DAT_003fae80 + iVar4 + 0xf) = *(byte *)(_DAT_003fae80 + iVar4 + 0xf) & 0xfe;
      *(byte *)(_DAT_003fae80 + iVar4 + 0xf) = *(byte *)(_DAT_003fae80 + iVar4 + 0xf) | 4;
      *(undefined *)(_DAT_003fae80 + iVar4 + 0xb) = 0xff;
    }
  }
  return;
}

