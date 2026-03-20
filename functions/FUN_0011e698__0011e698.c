/*
 * Program: n42.bin
 * Function: FUN_0011e698
 * Entry: 0011e698
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e698(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if (B_mde9e == '\0') {
    *(undefined *)*param_2 = 0x11;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
    return;
  }
  if (_DAT_003fb1f0 == 1) {
    if (*(short *)((int)param_2 + 6) != 1) {
      *(undefined *)*param_2 = 0x12;
      *(undefined2 *)(param_2 + 2) = 1;
      *(undefined *)((int)param_2 + 10) = 2;
      return;
    }
    DAT_003fb1ec = 0;
    DAT_003fb1ed = 0;
    bVar1 = *(byte *)(param_2 + 3);
    if (bVar1 < 5) {
      if (bVar1 == 4) {
        DAT_003fb1ed = 0;
        DAT_003fb1ec = 0;
        do {
          iVar2 = (uint)DAT_003fb1ec * 5;
          (&DAT_003fb1c4)[iVar2] = DAT_003fb1ec + 1;
          (&DAT_003fb1c5)[iVar2] = 0;
          (&DAT_003fb1c6)[iVar2] = 0;
          (&DAT_003fb1c7)[iVar2] = 0;
          (&DAT_003fb1c8)[iVar2] = 0;
          DAT_003fb1ec = DAT_003fb1ec + 1;
        } while (DAT_003fb1ec < 8);
        FUN_001266b4();
        DAT_003fb1c5 = CALIBID1;
        DAT_003fb1c6 = DAT_005b89b9;
        DAT_003fb1c7 = DAT_005b89ba;
        DAT_003fb1c8 = DAT_005b89bb;
        DAT_003fb1ca = DAT_005b89bc;
        DAT_003fb1cb = DAT_005b89bd;
        DAT_003fb1cc = DAT_005b89be;
        DAT_003fb1cd = DAT_005b89bf;
        DAT_003fb1cf = DAT_005b89c0;
        DAT_003fb1d0 = DAT_005b89c1;
        DAT_003fb1d1 = DAT_005b89c2;
        DAT_003fb1d2 = DAT_005b89c3;
        DAT_003fb1d9 = CALIBID2;
        DAT_003fb1da = DAT_005b89c5;
        DAT_003fb1db = DAT_005b89c6;
        DAT_003fb1dc = DAT_005b89c7;
        DAT_003fb1de = DAT_005b89c8;
        DAT_003fb1df = DAT_005b89c9;
        DAT_003fb1e0 = DAT_005b89ca;
        DAT_003fb1e1 = DAT_005b89cb;
        DAT_003fb1e3 = DAT_005b89cc;
        DAT_003fb1e4 = DAT_005b89cd;
        DAT_003fb1e5 = DAT_005b89ce;
        DAT_003fb1e6 = DAT_005b89cf;
        goto LAB_0011ea94;
      }
      if (bVar1 == 0) {
        *(undefined *)(*param_2 + 1) = 1;
        *(undefined *)(*param_2 + 2) = 0x3c;
        *(undefined *)(*param_2 + 3) = 0;
        *(undefined *)(*param_2 + 4) = 0;
        *(undefined *)(*param_2 + 5) = 0;
        *(undefined2 *)(param_2 + 2) = 6;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      if (bVar1 == 3) {
        *(undefined *)(*param_2 + 1) = 8;
        *(undefined2 *)(param_2 + 2) = 2;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
    }
    else {
      if (bVar1 == 5) {
        *(undefined *)(*param_2 + 1) = 2;
        *(undefined2 *)(param_2 + 2) = 2;
        *(undefined *)((int)param_2 + 10) = 1;
        return;
      }
      if (bVar1 == 6) {
        *(undefined *)(*param_2 + 1) = 1;
        if (nmot_w != 0) {
          *(undefined *)*param_2 = 0x22;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 2;
          return;
        }
        if ((B_m9cvn == '\0') && (DAT_003fc0e6 == '\0')) {
          B_m9cvn = '\x01';
          B_cksbrdy = '\0';
          B_cksbrdy2 = '\0';
        }
        if ((B_cksbrdy == '\0') || (B_cksbrdy2 == '\0')) {
          *(undefined *)*param_2 = 0x78;
          *(undefined2 *)(param_2 + 2) = 1;
          *(undefined *)((int)param_2 + 10) = 5;
          return;
        }
        B_m9cvn = '\0';
        DAT_003fc0e6 = '\x01';
        DAT_003fb1ed = 0;
        DAT_003fb1ec = 2;
        *(undefined *)*param_2 = 6;
        DAT_003fb1c4 = 1;
        DAT_003fb1c5 = cvn;
        DAT_003fb1c6 = DAT_005b89d1;
        DAT_003fb1c7 = DAT_005b89d2;
        DAT_003fb1c8 = DAT_005b89d3;
        DAT_003fb1c9 = 2;
        DAT_003fb1ca = cvn2;
        DAT_003fb1cb = DAT_005b89d5;
        DAT_003fb1cc = DAT_005b89d6;
        DAT_003fb1cd = DAT_005b89d7;
        goto LAB_0011ea94;
      }
    }
    *(undefined *)*param_2 = 0x12;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  else {
LAB_0011ea94:
    iVar2 = (uint)DAT_003fb1ed * 5;
    *(undefined *)(*param_2 + 1) = (&DAT_003fb1c4)[iVar2];
    *(byte *)(*param_2 + 2) = (&DAT_003fb1c5)[iVar2];
    *(undefined *)(*param_2 + 3) = (&DAT_003fb1c6)[iVar2];
    *(undefined *)(*param_2 + 4) = (&DAT_003fb1c7)[iVar2];
    *(undefined *)(*param_2 + 5) = (&DAT_003fb1c8)[iVar2];
    *(undefined2 *)(param_2 + 2) = 6;
    uVar3 = DAT_003fb1ed + 1;
    DAT_003fb1ed = (byte)uVar3;
    if ((uVar3 & 0xff) == (uint)DAT_003fb1ec) {
      *(undefined *)((int)param_2 + 10) = 1;
      _DAT_003fb1f0 = 1;
    }
    else {
      *(undefined *)((int)param_2 + 10) = 4;
      _DAT_003fb1f0 = 0;
    }
  }
                    /* WARNING: Read-only address (ram,0x005b89bf) is written */
                    /* WARNING: Read-only address (ram,0x005b89c0) is written */
                    /* WARNING: Read-only address (ram,0x005b89cb) is written */
                    /* WARNING: Read-only address (ram,0x005b89cc) is written */
  return;
}

