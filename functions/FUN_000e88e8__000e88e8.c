/*
 * Program: n42.bin
 * Function: FUN_000e88e8
 * Entry: 000e88e8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000e89d4) */

void FUN_000e88e8(void)

{
  byte bVar2;
  uint uVar1;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  if (DAT_003fad90 != evz_austot) {
    cVar5 = '\x04';
    redistb1 = 0;
    bVar2 = 1;
    do {
      if ((evz_austot & ~zzbank & bVar2) != 0) {
        redistb1 = redistb1 + 1;
      }
      bVar2 = bVar2 * '\x02';
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    cVar5 = '\x04';
    redistb2 = 0;
    bVar2 = 1;
    do {
      if ((evz_austot & zzbank & bVar2) != 0) {
        redistb2 = redistb2 + 1;
      }
      bVar2 = bVar2 * '\x02';
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    uVar3 = (uint)redistb2;
    uVar1 = (uint)redistb1;
    uVar4 = uVar1 + uVar3;
    if (0xff < uVar4) {
      uVar4 = 0xff;
    }
    redist = (byte)uVar4;
    B_evakt = (uVar4 & 0xff) == 0;
    B_bevab = (byte)((-uVar1 & ~uVar1) >> 0x1f);
    B_bevab2 = (byte)((-uVar3 & ~uVar3) >> 0x1f);
    if (((int)(-uVar1 & ~uVar1) < 0) || ((int)(-uVar3 & ~uVar3) < 0)) {
      B_evloc = 0;
    }
    DAT_003fad90 = evz_austot;
  }
  if ((stateaevab == 0) && (evz_austot == 0)) {
    B_evloc = 1;
  }
  if (DAT_003fad91 != abmf) {
    cVar5 = '\x04';
    redbas = 0;
    bVar2 = 1;
    do {
      if ((abmf & bVar2) != 0) {
        redbas = redbas + 1;
      }
      bVar2 = bVar2 * '\x02';
      cVar5 = cVar5 + -1;
    } while (cVar5 != '\0');
    DAT_003fad91 = abmf;
  }
  return;
}

