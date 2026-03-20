/*
 * Program: n42.bin
 * Function: FUN_000c6680
 * Entry: 000c6680
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_000c6680(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  sVar1 = ((short)(char)zwgru + (short)(char)dzwwl + (short)(char)vszw + (short)ZWAPPL) -
          (ushort)wkrdy;
  uVar3 = (uint)zzylzue;
  if (B_llrein == '\0') {
    sVar2 = (short)(char)zwstt + (short)(char)vszw + (short)ZWAPPL;
  }
  else {
    sVar2 = sVar1 + (char)(&DAT_005b9124)[uVar3];
  }
  if (sVar2 < 0x80) {
    if (sVar2 < -0x80) {
      zwbasar = 0x80;
    }
    else {
      zwbasar = (byte)sVar2;
    }
  }
  else {
    zwbasar = 0x7f;
  }
  zwbas = zwbasar;
  if (uVar3 < 3) {
    uVar3 = uVar3 + 1;
  }
  else {
    uVar3 = 0;
  }
  if (B_llrein == '\0') {
    sVar2 = (short)(char)zwstt + (short)(char)vszw + (short)ZWAPPL;
  }
  else {
    sVar2 = sVar1 + (char)(&DAT_005b9124)[uVar3];
  }
  if (sVar2 < 0x80) {
    if (sVar2 < -0x80) {
      DAT_005b920d = 0x80;
    }
    else {
      DAT_005b920d = (undefined)sVar2;
    }
  }
  else {
    DAT_005b920d = 0x7f;
  }
  if (uVar3 < 3) {
    uVar3 = uVar3 + 1;
  }
  else {
    uVar3 = 0;
  }
  if (B_llrein == '\0') {
    sVar2 = (short)(char)zwstt + (short)(char)vszw + (short)ZWAPPL;
  }
  else {
    sVar2 = sVar1 + (char)(&DAT_005b9124)[uVar3];
  }
  if (sVar2 < 0x80) {
    if (sVar2 < -0x80) {
      DAT_005b920e = 0x80;
    }
    else {
      DAT_005b920e = (undefined)sVar2;
    }
  }
  else {
    DAT_005b920e = 0x7f;
  }
  if (uVar3 < 3) {
    iVar4 = uVar3 + 1;
  }
  else {
    iVar4 = 0;
  }
  if (B_llrein == '\0') {
    sVar1 = (short)(char)zwstt + (short)(char)vszw + (short)ZWAPPL;
  }
  else {
    sVar1 = sVar1 + (char)(&DAT_005b9124)[iVar4];
  }
  if (sVar1 < 0x80) {
    if (sVar1 < -0x80) {
      DAT_005b920f = 0x80;
    }
    else {
      DAT_005b920f = (undefined)sVar1;
    }
  }
  else {
    DAT_005b920f = 0x7f;
  }
  return;
}

