/*
 * Program: n42.bin
 * Function: FUN_000c921c
 * Entry: 000c921c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000c921c(uint param_1,int param_2,int param_3,char param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined4 *puVar8;
  byte bVar9;
  uint uVar10;
  undefined4 uVar11;
  uint in_MSR;
  
  if ((param_2 == 1) && (param_3 == 1)) {
    if (param_4 == '\0') {
      uVar10 = FUN_00099c74(0x15);
      uadki = (ushort)(uVar10 >> 2) & 0xff;
      FUN_0009acb8(0x15);
      uVar11 = *(undefined4 *)(_DAT_003fbcbc + 0x1c);
      puVar8 = _DAT_003fbcb8 + 1;
      *_DAT_003fbcb8 = _DAT_002fc014;
      _DAT_003fbcb8 = puVar8;
      uVar10 = in_MSR >> 0xe & 1;
      param_1 = in_MSR & 0x9030 |
                in_MSR & 0xffff6fcf | (in_MSR >> 0xf & 1 | uVar10) << 0xf |
                (in_MSR >> 5 & 1 | uVar10) << 5 | (in_MSR >> 4 & 1 | uVar10) << 4;
      uVar10 = zzylkr + 2 & 0xff;
      if (3 < uVar10) {
        uVar10 = uVar10 + 0xfc & 0xff;
      }
      if (B_dtpb == '\0') {
        bVar1 = (&UNK_003fb190)[uVar10];
        AS_ksa3._1_1_ =
             ((bVar1 & 4) != 0) * '\x04' & 4U |
             ((bVar1 & 2) != 0) * '\x02' & 2U | (bVar1 & 1) != 0 | (byte)AS_ksa3 & 0xf8;
        if (B_dntb != '\0') {
          if ((B_dnt == '\0') &&
             ((B_ntini != '\0' || (((B_krndy == '\0' && (B_krldy == '\0')) && (B_kr != '\0')))))) {
            B_ntini = '\0';
            B_dnt = '\x01';
            B_c95ks3 = '\x01';
            AS_ksa3._0_1_ = AS_ksa3._0_1_ & 0xfd | 2;
          }
          else {
            B_c95ks3 = '\0';
            AS_ksa3._0_1_ = AS_ksa3._0_1_ & 0xfd;
          }
        }
      }
      else if (B_dtp == '\0') {
        if ((B_krldy == '\0') && (B_krndy == '\0')) {
          B_dtp = '\x01';
          AS_ksa3._1_1_ = (byte)AS_ksa3 & 0xf8 | 3;
          AS_ksa3._0_1_ = AS_ksa3._0_1_ & 0xfb | 4;
        }
        else {
          bVar1 = (&UNK_003fb190)[uVar10];
          AS_ksa3._1_1_ =
               ((bVar1 & 4) != 0) * '\x04' & 4U |
               ((bVar1 & 2) != 0) * '\x02' & 2U | (bVar1 & 1) != 0 | (byte)AS_ksa3 & 0xf8;
        }
      }
      else {
        AS_ksa3._0_1_ = AS_ksa3._0_1_ & 0xfb;
        bVar1 = (&UNK_003fb190)[uVar10];
        AS_ksa3._1_1_ =
             ((bVar1 & 4) != 0) * '\x04' & 4U |
             ((bVar1 & 2) != 0) * '\x02' & 2U | (bVar1 & 1) != 0 | (byte)AS_ksa3 & 0xf8;
      }
      bVar2 = (((&DAT_005b90e8)[uVar10] & 1) != 0) * -0x80;
      bVar9 = ((&DAT_005b90e8)[uVar10] & 2) != 0 | AS_ksa3._0_1_ & 0xfe;
      bVar1 = (&fmfkraktne)[uVar10];
      bVar3 = bVar2 | (byte)AS_ksa3 & 0x7f;
      if (bVar1 != fmfkrakt) {
        B_fmfkrc = '\x01';
        if (bVar1 < fmfkrakt) {
          B_fmfkrcu = 1;
        }
        else if (fmfkrakt < bVar1) {
          B_fmfkrco = 1;
        }
        if (bVar1 < 0x11) {
          _DAT_003faf84 = (uint)*(byte *)(bVar1 + 0x1c79c);
        }
        else {
          _DAT_003faf84 = 0;
        }
        B_c95bf0 = (_DAT_003faf84 & 1) != 0;
        B_c95bf1 = (_DAT_003faf84 & 2) != 0;
        B_c95bf2 = (_DAT_003faf84 & 4) != 0;
        B_c95bf3 = (_DAT_003faf84 & 8) != 0;
        _DAT_003fafec = (short)(0x400 / kereffw);
        fmfkrakt = bVar1;
        bVar3 = B_c95bf3 << 6 |
                B_c95bf2 << 5 | B_c95bf1 << 4 | B_c95bf0 << 3 | bVar2 | (byte)AS_ksa3 & 7;
      }
      AS_ksa3._1_1_ = bVar3;
      bVar1 = AS_ksa3._0_1_ >> 2;
      bVar2 = AS_ksa3._0_1_ >> 1;
      bVar3 = (byte)AS_ksa3 >> 7;
      bVar4 = (byte)AS_ksa3 >> 6;
      bVar5 = (byte)AS_ksa3 >> 5;
      bVar6 = (byte)AS_ksa3 >> 4;
      bVar7 = (byte)AS_ksa3 >> 3;
      _DAT_002fc014 = uVar11;
      AS_ksa3._0_1_ = bVar9;
      FUN_0009bbb0(2,(byte)AS_ksa3 & 1 | ((byte)AS_ksa3 >> 1 & 1) << 1 |
                     ((byte)AS_ksa3 >> 2 & 1) << 2);
      FUN_0009bbb0(1,bVar7 & 1 | (bVar6 & 1) << 1 | (bVar5 & 1) << 2 | (bVar4 & 1) << 3);
      FUN_0009bbb0(0,(uint)bVar3 | (bVar9 & 1) << 1 | (bVar2 & 1) << 2 | (bVar1 & 1) << 3);
      _DAT_002fc014 = _DAT_003fbcb8[-1];
      _DAT_003fbcb8 = _DAT_003fbcb8 + -1;
      tn2 = (word)(tseg_l >> 5);
      tmfl_w = (word)(((uint)wmfl * (tseg_l >> 5 & 0xffff)) / 0xf0);
      if (((B_c95ks3 == '\0') && ((AS_ksa3._0_1_ >> 2 & 1) == 0)) && (B_krmfok != '\0')) {
        wmfa = wmfa_new;
        wmfl = wmfl_new;
        param_1 = (*(code *)&SUB_0006997c)
                            (((uint)wmfa_new * 0x4b) / 10 + 0x438,0x28,((uint)wmfl_new * 0x4b) / 10,
                             10,0x708,1);
      }
    }
    else {
      tpnt_aktiv = 0;
      if (B_c95ks3 != '\0') {
        uVar10 = FUN_00099c74(0x15);
        DAT_003faf88 = (undefined)(uVar10 >> 2);
      }
      zzylkr = zzyl - 1;
      if (3 < zzylkr) {
        zzylkr = zzyl + 3;
      }
      if (B_fmfkrc != '\0') {
        if (_DAT_003fafec == 0) {
          B_fmfkrc = '\0';
          B_fmfkrcu = 0;
          B_fmfkrco = 0;
        }
        else {
          _DAT_003fafec = _DAT_003fafec + -1;
        }
      }
      FUN_000c8690();
      FUN_000caa94();
      FUN_000ca140();
      FUN_000c9d24();
      FUN_000c9984();
      param_1 = FUN_000c9c08();
    }
  }
  return param_1;
}

