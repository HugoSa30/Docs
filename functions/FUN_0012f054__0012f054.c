/*
 * Program: n42.bin
 * Function: FUN_0012f054
 * Entry: 0012f054
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0012f054(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  ztpnt_a = 1;
  B_tpnt_aw = 0;
  B_ntini = 1;
  func_0xff21b6d4(&UNK_003faf8c,&FMFKRN1,&KRANH);
  func_0xff21b6d4(&UNK_003faf98,&FMFKRN2,&KRANH);
  func_0xff21b6d4(&UNK_003fafa4,&FMFKRN3,&KRANH);
  func_0xff21b6d4(&UNK_003fafb0,&FMFKRN4,&KRANH);
  func_0xff21b6d4(&UNK_003fafbc,&FMFKRN5,&KRANH);
  func_0xff21b6d4(&UNK_003fafc8,&FMFKRN6,&KRANH);
  func_0xff21b6d4(&UNK_003fafd4,&FMFKRN7,&KRANH);
  func_0xff21b6d4(&UNK_003fafe0,&FMFKRN8,&KRANH);
  B_fmfkrcu = 0;
  B_fmfkrco = 0;
  B_fmfkrc = 0;
  _DAT_003fafec = 0;
  B_krntfv = 0;
  B_krtpfv = 0;
  DAT_005b90e5 = 0x25;
  DAT_003faf88 = 0x25;
  ikrma = 0x25;
  DAT_005b90e3 = 0x25;
  DAT_005b90e2 = 0x25;
  uVar5 = 0;
  do {
    (&UNK_003fc244)[uVar5] = 0x25;
    (&UNK_003fc24c)[uVar5] = 0x25;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  ks_sym = 0;
  DAT_003fc255 = 1;
  DAT_003fc256 = 2;
  DAT_003fc257 = 3;
  uVar5 = 0;
  do {
    (&DAT_005b90e8)[uVar5] = (&ks_sym)[(byte)(&SENZZYL)[uVar5]];
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 4);
  AS_ksa3._1_1_ = (byte)AS_ksa3 & 0x78 | 5;
  B_c95ks3 = 0;
  AS_ksa3._0_1_ = AS_ksa3._0_1_ & 0xf8;
  FUN_0017464c();
  fmfkrakt = fmfkraktne;
  if (fmfkraktne < 0x11) {
    _DAT_003faf84 = (uint)*(byte *)(fmfkraktne + 0x1c774);
  }
  else {
    _DAT_003faf84 = 0;
  }
  B_c95bf0 = (_DAT_003faf84 & 1) != 0;
  B_c95bf1 = (_DAT_003faf84 & 2) != 0;
  B_c95bf2 = (_DAT_003faf84 & 4) != 0;
  B_c95bf3 = (_DAT_003faf84 & 8) != 0;
  bVar3 = B_c95bf3 << 6 | B_c95bf2 << 5 | B_c95bf1 << 4 | B_c95bf0 << 3 | (byte)AS_ksa3 & 0x87;
  bVar4 = AS_ksa3._0_1_ >> 2;
  bVar1 = AS_ksa3._0_1_ >> 1;
  uVar5 = (uint)AS_ksa3._0_1_;
  bVar2 = (byte)AS_ksa3 >> 7;
  AS_ksa3._1_1_ = bVar3;
  func_0xff20bbb0(2,bVar3 & 1 | (bVar3 >> 1 & 1) << 1 | (bVar3 >> 2 & 1) << 2);
  func_0xff20bbb0(1,bVar3 >> 3 & 1 | (bVar3 >> 4 & 1) << 1 | (bVar3 >> 5 & 1) << 2 |
                    (bVar3 >> 6 & 1) << 3);
  func_0xff20bbb0(0,(uint)bVar2 | (uVar5 & 1) << 1 | (bVar1 & 1) << 2 | (bVar4 & 1) << 3);
  wmfa = 1;
  wmfl = 0xd;
  wmfa_new = func_0xff2196d0(&KFMAKR,nmot,rl);
  if (wmfa_new == 0) {
    wmfa_new = 1;
  }
  if (0x2f < wmfa_new) {
    wmfa_new = 0x2f;
  }
  bVar4 = wmfa_new;
  if (wmfa_new < 0x1c) {
    bVar4 = 0x1b;
  }
  wmfl_new = func_0xff2187cc(&KEMLN,nmot);
  if (wmfl_new < 0xd) {
    wmfl_new = 0xd;
  }
  if ((byte)(0xf0 - bVar4) < wmfl_new) {
    wmfl_new = 0xf0 - bVar4;
  }
  tmfl_w = 0x78;
  DAT_005b947c = 0x78;
  (*(code *)&SUB_00fb1d4c)(&UNK_003f9ad8,0x1c744);
  FUN_0012ed64(3);
  return;
}

