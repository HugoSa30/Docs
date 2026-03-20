/*
 * Program: n42.bin
 * Function: FUN_000ed328
 * Entry: 000ed328
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed328(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (B_mdstop == 0) {
    uVar1 = calc_vanos_optimal(&KFAMAL1,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    dVar3 = (double)_DAT_0001bd58;
    dVar2 = (double)_DAT_0001bd4c;
    _fkfamal1_f = (float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xff) - dVar2) * dVar3
                         );
    uVar1 = calc_vanos_optimal(&KFAMAL,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkfamal_f = (float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xff) - dVar2) * dVar3)
    ;
    uVar1 = calc_vanos_optimal(&KFAMAL2,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkfamal2_f = (float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xff) - dVar2) * dVar3
                         );
    uVar1 = FUN_000aafb0(&KFLURM1,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    dVar3 = (double)_DAT_0001bd50;
    dVar4 = (double)_DAT_0001bd54;
    _fkflurm1_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff
                                                                          ) - dVar2) * dVar3) /
                         dVar4);
    uVar1 = FUN_000aafb0(&KFLURM,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkflurm_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff)
                                                        - dVar2) * dVar3) / dVar4);
  }
  return;
}

