/*
 * Program: n42.bin
 * Function: FUN_00156d00
 * Entry: 00156d00
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00156d00(void)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = &DAT_003fd7b8;
  if ((DAT_003fde7b & 1) == 0) {
    if (obdstegs < 0xc) {
      if ((obdstegs & 2) == 0) {
        DAT_003fd7b8 = DAT_003fd7b8 & 0xfe;
      }
      else {
        DAT_003fd7b8 = DAT_003fd7b8 | 1;
      }
      if (B_egs1cok != '\0') {
        if (((obdstegs & 4) == 0) || ((obdstegs & 8) != 0)) {
          B_milfb = 0;
        }
        else {
          B_milfb = 1;
        }
        if (((obdstegs & 4) == 0) && ((obdstegs & 8) != 0)) {
          B_blkfb = 1;
        }
        else {
          B_blkfb = 0;
        }
      }
    }
    if (((DAT_003fd7b8 & 1) == 0) || (ffzdfp != 0)) {
      B_xff = 0;
    }
    else if (((DAT_003fd7b8 & 1) != 0) && ((DAT_003fd7b8 & 2) == 0)) {
      B_xff = 1;
    }
  }
  else {
    DAT_003fd7b8 = DAT_003fd7b8 | 3;
    B_xff = 0;
    B_milfb = 0;
    B_blkfb = 0;
  }
  obdsteuer = 0;
  uVar2 = (uint)B_xff;
  if (uVar2 == 0) {
    if (ffzdfp != 0) {
      obdsteuer = 4;
    }
  }
  else {
    obdsteuer = 8;
  }
  if (bbdcy != 0) {
    obdsteuer = obdsteuer | 2;
  }
  if (bbwuc != 0) {
    obdsteuer = obdsteuer | 1;
  }
  pbVar4 = pbVar3;
  if ((uVar2 == 1) && ((DAT_003fd7b8 & 4) == 0)) {
    func_0xff21bc48();
    if (uVar2 == 0) {
LAB_00156f14:
      *pbVar4 = *pbVar4 & 0xfb;
      goto LAB_00156f20;
    }
  }
  else if (uVar2 == 0) {
    func_0xff21bce0();
    goto LAB_00156f14;
  }
  *pbVar4 = *pbVar4 | 4;
LAB_00156f20:
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) {
    *pbVar3 = bVar1 & 0xfd;
  }
  else {
    *pbVar3 = bVar1 | 2;
  }
  return;
}

