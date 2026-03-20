/*
 * Program: n42.bin
 * Function: FUN_0018bb58
 * Entry: 0018bb58
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0018bb58(void)

{
  int iVar1;
  byte bVar2;
  double dVar3;
  
  if (B_mdstop == 0) {
    if (lurminstat == 0) {
      fofstat_loc = fofstat;
      fonstat_loc = fonstat;
    }
    else {
      fofstat_loc = fofstat;
      if (lurminstat != 1) {
        if (lurminstat == 2) {
          bVar2 = 1;
        }
        else {
          bVar2 = fofstat;
          if (lurminstat == 3) {
            bVar2 = 2;
          }
        }
        if (fofstat < bVar2) {
          fofstat_loc = bVar2;
        }
      }
      bVar2 = fonstat;
      if (lurminstat == 1) {
        bVar2 = 1;
      }
      fonstat_loc = fonstat;
      if (fonstat < bVar2) {
        fonstat_loc = bVar2;
      }
    }
    iVar1 = (esst_snm08dmub >> 0x10) * 2;
    dVar3 = (double)_DAT_0001bd4c;
    _flurmin2_f = ((float)((double)CONCAT44(0x43300000,
                                            (uint)*(ushort *)(&DAT_001c1554 + iVar1) +
                                            ((int)((esst_snm08dmub & 0xffff) *
                                                  ((uint)*(ushort *)(&DAT_001c1556 + iVar1) -
                                                  (uint)*(ushort *)(&DAT_001c1554 + iVar1))) >> 0x10
                                            ) & 0xffff) - dVar3) * _DAT_0001bd50) / _DAT_0001bd54;
    iVar1 = (esst_snm08dmub >> 0x10) * 2;
    _flurmin3_f = ((float)((double)CONCAT44(0x43300000,
                                            (uint)*(ushort *)(&DAT_001c1564 + iVar1) +
                                            ((int)((esst_snm08dmub & 0xffff) *
                                                  ((uint)*(ushort *)(&DAT_001c1566 + iVar1) -
                                                  (uint)*(ushort *)(&DAT_001c1564 + iVar1))) >> 0x10
                                            ) & 0xffff) - dVar3) * _DAT_0001bd50) / _DAT_0001bd54;
    iVar1 = (esst_snm08dmub >> 0x10) * 2;
    _flurmin1_f = ((float)((double)CONCAT44(0x43300000,
                                            (uint)*(ushort *)(&DAT_001c1544 + iVar1) +
                                            ((int)((esst_snm08dmub & 0xffff) *
                                                  ((uint)*(ushort *)(&DAT_001c1546 + iVar1) -
                                                  (uint)*(ushort *)(&DAT_001c1544 + iVar1))) >> 0x10
                                            ) & 0xffff) - dVar3) * _DAT_0001bd50) / _DAT_0001bd54;
  }
  return;
}

