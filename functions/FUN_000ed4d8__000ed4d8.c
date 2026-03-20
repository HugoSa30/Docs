/*
 * Program: n42.bin
 * Function: FUN_000ed4d8
 * Entry: 000ed4d8
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed4d8(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (B_mdstop == 0) {
    uVar1 = FUN_000aafb0(&KFLUARS,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    dVar2 = (double)_DAT_0001bd60;
    dVar3 = (double)_DAT_0001bd64;
    dVar4 = (double)_DAT_0001bd68;
    _fkfluars_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff
                                                                          ) - dVar2) * dVar3) /
                         dVar4);
    uVar1 = FUN_000aafb0(&KFLUAR2,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkfluar2_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff
                                                                          ) - dVar2) * dVar3) /
                         dVar4);
    uVar1 = FUN_000aafb0(&KFLUAR1,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkfluar1_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff
                                                                          ) - dVar2) * dVar3) /
                         dVar4);
    uVar1 = FUN_000aafb0(&KFLUAR,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkfluar_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff)
                                                        - dVar2) * dVar3) / dVar4);
  }
  return;
}

