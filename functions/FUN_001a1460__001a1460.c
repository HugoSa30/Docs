/*
 * Program: n42.bin
 * Function: FUN_001a1460
 * Entry: 001a1460
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001a1460(void)

{
  int iVar1;
  undefined *puVar2;
  byte bVar3;
  
  puVar2 = _DAT_003fbc84;
  iVar1 = _DAT_003fbc7c;
  if (CONCAT11(*(undefined *)(_DAT_003fbc7c + 5),*(undefined *)(_DAT_003fbc7c + 4)) !=
      *_DAT_003fbc90) {
    return;
  }
  _DAT_003fbc84[1] = 0;
  *puVar2 = 0xff;
  if (*(char *)(iVar1 + 2) == '\0') {
    bVar3 = 0;
    puVar2 = &DAT_003fbc20;
    if (DAT_00fa9c80 != 0) {
      do {
        if (puVar2[4] != -0x7f) break;
        puVar2 = puVar2 + 0xc;
        bVar3 = bVar3 + 1;
      } while (bVar3 < DAT_00fa9c80);
    }
    if (bVar3 != DAT_00fa9c80) {
      bVar3 = 0xde;
      goto LAB_001a1528;
    }
  }
  else {
    if (*(char *)(iVar1 + 2) != '\x01') {
      puVar2[1] = 0x32;
      return;
    }
    FUN_001a19ac();
    DAT_003fbc78 = 0;
  }
  bVar3 = 0xce;
LAB_001a1528:
  DAT_003fbc79 = DAT_003fbc79 & bVar3;
  return;
}

