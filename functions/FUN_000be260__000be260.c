/*
 * Program: n42.bin
 * Function: FUN_000be260
 * Entry: 000be260
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000be260(void)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  
  if ((((B_ph3flok >> 3 & 1) != 0) && (B_checkpg != '\0')) && ((_CWPG1 >> 8 & 1) != 0)) {
    if (pgmaster == '\0') {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    (*(code *)&SUB_000659dc)(&DAT_005b97d4,iVar1 << 2,0);
    if (((pgmaster == '\0') && ((_CWPG1 & 1) != 0)) && (((_CWPG1 >> 1 & 1) == 0 || (B_st != '\0'))))
    {
      dphBits_ph1 = dphBits_ph1 & ~B_enphbm | B_enphbm;
    }
    else {
      dphBits_ph1 = dphBits_ph1 & ~B_enphbm;
    }
    if ((dphBits_ph1 & B_enphbm) != 0) {
      bVar2 = 1;
      cVar3 = '\x02';
      DAT_005b8ddb = 0xfe;
      DAT_005b8ddc = 0xfe;
      while (DAT_005b97d8 < 0x1c20) {
        if (bVar2 == 8) {
          iVar1 = 1;
        }
        else {
          iVar1 = bVar2 + 1;
        }
        if (*(ushort *)(&DAT_005b97d4 + (uint)bVar2 * 2) < *(ushort *)(&DAT_005b97d4 + iVar1 * 2)) {
          cVar3 = cVar3 + -1;
          DAT_005b8ddb = bVar2;
        }
        if (bVar2 == 8) {
          iVar1 = 1;
        }
        else {
          iVar1 = bVar2 + 1;
        }
        if ((0xe10 < *(ushort *)(&DAT_005b97d4 + (uint)bVar2 * 2)) &&
           (*(ushort *)(&DAT_005b97d4 + iVar1 * 2) < 0xe10)) {
          cVar3 = cVar3 + -1;
          DAT_005b8ddc = bVar2;
        }
        bVar2 = bVar2 + 1;
        if ((cVar3 == '\0') || (8 < bVar2)) break;
      }
      if (((_CWPG1 >> 2 & 1) == (DAT_005b8ddb & 1)) &&
         (((DAT_005b8ddc & 1) != (DAT_005b8ddb & 1) && (cVar3 == '\0')))) {
        sVar4 = -1;
      }
      else {
        sVar4 = 2;
      }
      uVar5 = (ushort)PHBM * 2 + 4 & 0xff;
      if ((short)(sVar4 + (ushort)DAT_003faaa8) < (short)uVar5) {
        uVar5 = sVar4 + (ushort)DAT_003faaa8;
      }
      if ((short)uVar5 < 1) {
        uVar5 = 0;
      }
      DAT_003faaa8 = (byte)uVar5;
      phbmerr = DAT_003faaa8;
    }
  }
  return;
}

