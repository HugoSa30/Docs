/*
 * Program: n42.bin
 * Function: FUN_001758e0
 * Entry: 001758e0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_001758e0(void)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint local_10 [4];
  
  cVar3 = FUN_001a39ac(0x19,local_10);
  if (cVar3 == '\0') {
    DAT_005bb7ba = '\x01';
  }
  if (DAT_005bb7ba == '\0') {
    if (DAT_005bb7b9 < 6) {
      DAT_005bb7b9 = DAT_005bb7b9 + 1;
    }
    else {
      B_vdia1cok = 0;
      vvt_ffs = 0;
      vvt_frs = 0;
      vvt_plsen = 0;
      vvt_usen = 0;
      vvt_alern = 0;
      vvt_stell = 0;
      vvt_can = 0;
      vvt_ovrld = 0;
      vvt_sg = 0;
      vvt_endst = 0;
      vvt_uleis = 0;
      DAT_005b8945 = 0;
      DAT_005b8943 = 0;
    }
    B_vdia1new = 0;
  }
  else {
    DAT_005bb7ba = '\0';
    DAT_005bb7b9 = 0;
    vvt_ffs = (byte)local_10[0] & 0xf;
    vvt_frs = (byte)(local_10[0] >> 4) & 0xf;
    vvt_plsen = (byte)(local_10[0] >> 8) & 0xf;
    vvt_usen = (byte)(local_10[0] >> 0xc) & 0xf;
    vvt_alern = (byte)(local_10[0] >> 0x10) & 0xf;
    vvt_stell = (byte)(local_10[0] >> 0x14) & 0xf;
    bVar2 = (byte)(local_10[0] >> 0x18);
    vvt_can = bVar2 & 0xf;
    vvt_ovrld = bVar2 >> 4;
    FUN_001a39ac(0x1a,local_10);
    vvt_sg = (byte)local_10[0] & 0xf;
    vvt_endst = (byte)(local_10[0] >> 4) & 0xf;
    vvt_uleis = (byte)(local_10[0] >> 8) & 0xf;
    uVar1 = local_10[0] >> 0xc & 0xf;
    DAT_005b8945 = (undefined)uVar1;
    if (uVar1 == 4) {
      DAT_005b8943 = (byte)(local_10[0] >> 0x18) & 3;
    }
    B_vdia1new = B_vdia1new;
    B_vdia1cok = B_vdia1cok;
  }
  B_vdia2new = B_vdia2new;
  B_vdia2cok = B_vdia2cok;
  vvt_es2 = 0x7f;
  return;
}

