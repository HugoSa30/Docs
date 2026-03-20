/*
 * Program: n42.bin
 * Function: FUN_000bdfc8
 * Entry: 000bdfc8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bdfc8(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  
  if ((((B_ph3flok & 1) != 0) && ((_CWPG4 >> 8 & 1) != 0)) && (B_checkpg4 != '\0')) {
    if (pgmaster == '\x01') {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    (*(code *)&SUB_000659dc)(&DAT_005b97e6,iVar1 << 2,1);
    if (((pgmaster == '\x01') && ((_CWPG4 & 1) != 0)) &&
       (((_CWPG4 >> 1 & 1) == 0 || (B_st != '\0')))) {
      B_enph4bm = B_enph4bm & ~B_enph4bm | B_enph4bm;
    }
    else {
      B_enph4bm = B_enph4bm & ~B_enph4bm;
    }
    if ((B_enph4bm & B_enph4bm) != 0) {
      bVar2 = 1;
      cVar3 = '\x02';
      DAT_005b8ddd = 0xfe;
      DAT_005b8dde = 0xfe;
      while (DAT_005b97ea < 0x1c20) {
        if (bVar2 == 8) {
          iVar1 = 1;
        }
        else {
          iVar1 = bVar2 + 1;
        }
        if (*(ushort *)(&DAT_005b97e6 + (uint)bVar2 * 2) < *(ushort *)(&DAT_005b97e6 + iVar1 * 2)) {
          cVar3 = cVar3 + -1;
          DAT_005b8ddd = bVar2;
        }
        if (bVar2 == 8) {
          iVar1 = 1;
        }
        else {
          iVar1 = bVar2 + 1;
        }
        if ((0xe10 < *(ushort *)(&DAT_005b97e6 + (uint)bVar2 * 2)) &&
           (*(ushort *)(&DAT_005b97e6 + iVar1 * 2) < 0xe10)) {
          cVar3 = cVar3 + -1;
          DAT_005b8dde = bVar2;
        }
        bVar2 = bVar2 + 1;
        if ((cVar3 == '\0') || (8 < bVar2)) break;
      }
      if (((_CWPG4 >> 2 & 1) == (DAT_005b8ddd & 1)) &&
         (((DAT_005b8dde & 1) != (DAT_005b8ddd & 1) && (cVar3 == '\0')))) {
        sVar4 = -1;
      }
      else {
        sVar4 = 2;
      }
      uVar5 = (ushort)PHBM * 2 + 4 & 0xff;
      if ((short)(sVar4 + (ushort)DAT_003faa9e) < (short)uVar5) {
        uVar5 = sVar4 + (ushort)DAT_003faa9e;
      }
      if ((short)uVar5 < 1) {
        uVar5 = 0;
      }
      DAT_003faa9e = (byte)uVar5;
      ph4bmerr = DAT_003faa9e;
    }
  }
  return;
}

