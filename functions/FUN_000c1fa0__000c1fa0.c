/*
 * Program: n42.bin
 * Function: FUN_000c1fa0
 * Entry: 000c1fa0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Removing unreachable block (ram,0x000c2060) */

void FUN_000c1fa0(void)

{
  uint uVar1;
  int iVar2;
  
  if (B_sa == '\0') {
    if ((DAT_003fadcc & 1) != 0) {
      B_fwe = '\x01';
    }
  }
  else {
    B_fwe = '\0';
  }
  if (B_sa == '\0') {
    DAT_003fadcc = DAT_003fadcc & 0xfe;
  }
  else {
    DAT_003fadcc = DAT_003fadcc | 1;
  }
  DAT_003fadcd = anzti;
  if (B_fwe == '\0') {
    azylwe = 1;
    anzwefim = 0;
    fwe = 0x80;
  }
  else {
    uVar1 = (uint)azylwe + ((uint)anzti - (uint)DAT_003fadce & 0xff);
    if (0xff < uVar1) {
      uVar1 = 0xff;
    }
    azylwe = (byte)uVar1;
    B_afwe = 4 < (uVar1 & 0xff);
    if ((bool)B_afwe) {
      iVar2 = (uVar1 & 0xff) - 4;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (0xff < iVar2) {
        iVar2 = 0xff;
      }
      azylwe = (byte)iVar2;
      if (anzwefim != 0xff) {
        anzwefim = anzwefim + 1;
      }
    }
    if (B_ll == '\0') {
      uVar1 = (uint)anzwefim;
      fwe = FIMHU;
      if ((uVar1 != 0) && (fwe = DAT_001c65e3, uVar1 < 0x10)) {
        fwe = (&FIMHU)[uVar1];
      }
    }
    else {
      uVar1 = (uint)anzwefim;
      fwe = FIMWU;
      if ((uVar1 != 0) && (fwe = DAT_001c65f3, uVar1 < 0x10)) {
        fwe = (&FIMWU)[uVar1];
      }
    }
  }
  DAT_003fadce = anzti;
  return;
}

