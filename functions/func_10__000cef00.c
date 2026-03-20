/*
 * Program: n42.bin
 * Function: func_10
 * Entry: 000cef00
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_10(void)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  
  if (B_ngasok != '\0') {
    bVar3 = 0;
    DAT_003faa78 = irspsynold;
    tsast_l = 0;
    uVar2 = (uint)irspsynold;
    do {
      tsast_l = tsast_l + *(int *)(&DAT_005b9d4c + (uVar2 & 0xff) * 4);
      if ((uVar2 & 0xff) == 0) {
        uVar2 = 5;
      }
      else {
        uVar2 = uVar2 + 0xff;
      }
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
    DAT_003faa79 = (undefined)uVar2;
    nmotas_w = *(word *)(&DAT_005b97b4 + (uVar2 & 0xff) * 2);
    iVar1 = (uint)*(ushort *)(&DAT_005b97b4 + (uint)irspsynold * 2) - (uint)nmotas_w;
    if (iVar1 < -0x8000) {
      iVar1 = -0x8000;
    }
    else if (0x7fff < iVar1) {
      iVar1 = 0x7fff;
    }
    dnmotas_w = (word)iVar1;
    if (tsast_l < 0x18ffe71) {
      uVar2 = tsast_l / 400;
      if (0xffff < uVar2) {
        uVar2 = 0xffff;
      }
      tsas_w = (word)uVar2;
    }
    else {
      tsas_w = 0xffff;
    }
    ngas_w = FUN_000b1710((short)dnmotas_w * 16000,tsas_w);
    ngfil_w = FUN_000b24cc(&DAT_003faa74,(int)(short)ngas_w,_ZNGFIL);
    ngfil = (byte)(ngfil_w >> 8);
    if ((short)ngfil_w < 0) {
      ngfil = ngfil + 1;
    }
  }
  return;
}

