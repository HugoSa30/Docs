/*
 * Program: n42.bin
 * Function: FUN_00121bc0
 * Entry: 00121bc0
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_00121bc0(undefined4 param_1,byte **param_2)

{
  uint uVar1;
  uint uVar2;
  word wVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  ushort uVar10;
  
  if (*(short *)((int)param_2 + 6) == 2) {
    pbVar7 = *param_2;
    uVar2 = (uint)*pbVar7 * 0x100 + (uint)pbVar7[1] & 0xffff;
    if (uVar2 == 0) {
      *pbVar7 = fcmEnd;
      (*param_2)[1] = 0;
      (*param_2)[2] = 0;
      wVar3 = kmstand;
      (*param_2)[3] = (byte)(kmstand >> 8);
      (*param_2)[4] = (byte)wVar3;
      *(undefined2 *)(param_2 + 2) = 5;
      *(undefined *)((int)param_2 + 10) = 1;
    }
    else {
      *pbVar7 = fcmEnd;
      uVar8 = 1;
      uVar10 = 1;
      if (fcmEnd < uVar2) {
        (*param_2)[1] = 0;
        uVar10 = 2;
      }
      else {
        uVar5 = 1;
        uVar1 = (uint)fcmEnd;
        if ((int)(uVar2 - 1) < (int)uVar1) {
          do {
            iVar4 = (uVar2 + uVar5) * 0x28;
            (*param_2)[uVar8 & 0xff] =
                 (byte)((ushort)*(undefined2 *)(&CDKAAA + (uint)(byte)(&UNK_003fcefc)[iVar4] * 2) >>
                       8);
            (*param_2)[uVar8 + 1 & 0xff] =
                 (byte)*(undefined2 *)(&CDKAAA + (uint)(byte)(&UNK_003fcefc)[iVar4] * 2);
            (*param_2)[uVar8 + 2 & 0xff] = (&UNK_003fcefd)[iVar4];
            (*param_2)[uVar8 + 3 & 0xff] = (byte)*(undefined2 *)(&DAT_003fcefe + iVar4);
            (*param_2)[uVar8 + 4 & 0xff] =
                 (byte)((ushort)*(undefined2 *)(&DAT_003fcefe + iVar4) >> 8);
            (*param_2)[uVar8 + 5 & 0xff] = (byte)*(undefined2 *)(&UNK_003fcf00 + iVar4);
            (*param_2)[uVar8 + 6 & 0xff] =
                 (byte)((ushort)*(undefined2 *)(&UNK_003fcf00 + iVar4) >> 8);
            (*param_2)[uVar8 + 7 & 0xff] = (&UNK_003fcf02)[iVar4];
            (*param_2)[uVar8 + 8 & 0xff] = (&UNK_003fcf03)[iVar4];
            (*param_2)[uVar8 + 9 & 0xff] = (&UNK_003fcf04)[iVar4];
            uVar9 = uVar8 + 10;
            pbVar7 = &UNK_003fcf05 + iVar4;
            if (pbVar7 <= &UNK_003fcf23 + iVar4) {
              pbVar6 = &UNK_003fcf23 + iVar4;
              if (((int)pbVar7 - (int)pbVar6 & 1U) == 0) {
                (*param_2)[uVar9 & 0xff] = *pbVar7;
                uVar9 = uVar8 + 0xb;
                pbVar7 = &UNK_003fcf06 + iVar4;
                if (pbVar6 < pbVar7) goto LAB_00121e64;
              }
              do {
                (*param_2)[uVar9 & 0xff] = *pbVar7;
                (*param_2)[uVar9 + 1 & 0xff] = pbVar7[1];
                uVar9 = uVar9 + 2;
                pbVar7 = pbVar7 + 2;
              } while (pbVar7 <= pbVar6);
            }
LAB_00121e64:
            uVar10 = (ushort)uVar9;
            uVar5 = uVar5 + 1 & 0xffff;
          } while (((int)(uVar5 + uVar2 + -2) < (int)uVar1) && (uVar8 = uVar9, uVar5 < 6));
        }
      }
      *(ushort *)(param_2 + 2) = uVar10 & 0xff;
      *(undefined *)((int)param_2 + 10) = 1;
    }
  }
  else {
    **param_2 = 0x10;
    *(undefined2 *)(param_2 + 2) = 1;
    *(undefined *)((int)param_2 + 10) = 2;
  }
  return;
}

