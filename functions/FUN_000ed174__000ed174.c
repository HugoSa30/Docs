/*
 * Program: n42.bin
 * Function: FUN_000ed174
 * Entry: 000ed174
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed174(void)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (B_mdstop == 0) {
    uVar1 = FUN_000a90c8(LURBRL,&DAT_001c158f,&DAT_001c1594,rl);
    dVar2 = (double)_DAT_0001bd4c;
    dVar3 = (double)_DAT_0001bd50;
    dVar4 = (double)_DAT_0001bd54;
    _flurbrl_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff)
                                                        - dVar2) * dVar3) / dVar4);
    uVar1 = FUN_000aafb0(&KFLURB2,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkflurb2_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff
                                                                          ) - dVar2) * dVar3) /
                         dVar4);
    uVar1 = FUN_000aafb0(&KFLURB1,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkflurb1_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff
                                                                          ) - dVar2) * dVar3) /
                         dVar4);
    uVar1 = FUN_000aafb0(&KFLURB,DAT_001c0f9c,esst_srl08dmub,esst_snm08dmub);
    _fkflurb_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff)
                                                        - dVar2) * dVar3) / dVar4);
    uVar1 = calc_value_from_y(&LURST,tnst_w);
    _flurst_f = (float)((double)(float)((double)(float)((double)CONCAT44(0x43300000,uVar1 & 0xffff)
                                                       - dVar2) * dVar3) / dVar4);
  }
  return;
}

