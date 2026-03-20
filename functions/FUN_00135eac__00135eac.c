/*
 * Program: n42.bin
 * Function: FUN_00135eac
 * Entry: 00135eac
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00135eac(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = tmot;
  uVar3 = 0;
  do {
    iVar4 = uVar3 * 0x78;
    uVar5 = (uint)*(byte *)(iVar4 + 0x1f880);
    if ((**(byte **)(iVar4 + 0x1f830) & 0x40) != 0) {
      B_phad = B_phad | (byte)(1 << (uVar5 & 0x3f));
    }
    if (DAT_001cb703 < (byte)(&DAT_005b8ee4)[uVar5]) {
      (&DAT_005b8eec)[uVar5] = (&DAT_005b8eec)[uVar5] | 0x81;
    }
    else {
      (&DAT_005b8eec)[uVar5] = (&DAT_005b8eec)[uVar5] & 0xfe;
    }
    if (DAT_001cb704 < (byte)(&DAT_005b8ee8)[uVar5]) {
      (&DAT_005b8eec)[uVar5] = (&DAT_005b8eec)[uVar5] | 0xa0;
    }
    else {
      (&DAT_005b8eec)[uVar5] = (&DAT_005b8eec)[uVar5] & 0xdf;
    }
    bVar1 = (&DAT_005b8eec)[*(byte *)(iVar4 + 0x1f880)];
    if ((bVar2 < DAT_001cb707) && (DAT_001cb706 < bVar2)) {
      if (((bVar1 & 0x10) == 0) && (((bVar1 & 1) == 0 && ((bVar1 & 2) == 0)))) {
        B_anwpnp2 = B_anwpnp2 & ~(byte)(1 << (uVar5 + 4 & 0x3f));
      }
      else {
        B_anwpnp2 = B_anwpnp2 | (ENUM_005b8bb0)(1 << (uVar5 + 4 & 0x3f));
      }
      if ((((bVar1 & 4) == 0) && ((bVar1 & 0x20) == 0)) && ((bVar1 & 8) == 0)) {
        B_anwpnp2 = B_anwpnp2 & ~(byte)(1 << (uVar5 & 0x3f));
      }
      else {
        B_anwpnp2 = B_anwpnp2 | (ENUM_005b8bb0)(1 << (uVar5 & 0x3f));
      }
    }
    if ((bVar1 & 0x80) != 0) {
      B_evanos = 1;
    }
    if (DEAVANOS == '\0') {
      B_evanos = 0;
      (&DAT_005b8eec)[uVar5] = (&DAT_005b8eec)[uVar5] & 0x7f;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 2);
  return;
}

