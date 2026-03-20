/*
 * Program: n42.bin
 * Function: FUN_0009a380
 * Entry: 0009a380
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009a380(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r20;
  byte bVar10;
  uint uVar11;
  ushort uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined2 local_154;
  byte local_d0 [104];
  uint local_68;
  uint local_64;
  undefined4 local_60;
  
  local_68 = 0;
  local_64 = 0;
  local_60 = _DAT_0000aaa0;
  uVar8 = 0;
  uVar4 = (uint)DAT_00016ab2;
  if (uVar4 != 0) {
    do {
      uVar9 = 0;
      do {
        local_68 = local_64 >> 0x1f | local_68 << 1;
        local_64 = local_64 << 1 |
                   (int)(short)(*(ushort *)(*(int *)(uVar8 * 8 + 0x16aa0) + uVar9 * 2 + 0x280) & 1);
        uVar9 = uVar9 + 1 & 0xff;
      } while (uVar9 < 0x20);
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar4);
  }
  _DAT_003fa118 = local_68;
  _DAT_003fa11c = local_64;
  uVar8 = 0;
  uVar9 = (uint)DAT_00016ab0;
  if (uVar9 != 0) {
    do {
      *(undefined4 *)(&DAT_003fce3c + uVar8 * 8) = 0;
      (&DAT_003fce40)[uVar8 * 8] = 0;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < uVar9);
  }
  DAT_003fa124 = 0;
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      uVar9 = 0;
      DAT_003fa3bc = 0;
      bVar5 = 0;
      _DAT_003fa3b8 = 0;
      _DAT_003fa3ba = 0;
      uVar16 = 0;
      uVar4 = 0;
      uVar11 = (uint)DAT_00016ab0;
      if (uVar11 != 0) {
        do {
          local_d0[uVar4] = 0;
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < uVar11);
      }
      iVar3 = uVar8 * 4;
      (&UNK_003fa3b2)[iVar3] = *(undefined *)(iVar3 + 0x16857);
      (&UNK_003fa3b3)[iVar3] = *(undefined *)(iVar3 + 0x16858);
      DAT_003fa124 = DAT_003fa124 << 2 | 3;
      iVar3 = *(int *)(uVar8 * 8 + 0x16aa0);
      local_154._0_1_ = *(undefined *)(uVar8 * 8 + 0x16aa4);
      uVar4 = 0;
      if (uVar11 != 0) {
        do {
          iVar2 = uVar4 * 0x10;
          if ((*(int *)(iVar2 + 0x16864) == iVar3) && (*(char *)(iVar2 + 0x16868) == '\x01')) {
            local_d0[uVar9] = (byte)uVar4;
            _DAT_003fa3b8 = *(short *)(iVar2 + 0x16862);
            bVar13 = DAT_003fa3bc;
            if (_DAT_003fa3b8 == 0x1800) {
              bVar13 = bVar5;
              bVar5 = bVar5 + 1;
            }
            *(uint *)(&DAT_003fce3c + uVar4 * 8) = iVar3 + (uint)bVar13 * 2 + 0x280;
            (&DAT_003fce40)[uVar4 * 8] = (char)(2 << (uVar8 * 2 & 0x3f));
            uVar9 = uVar9 + 1 & 0xff;
            DAT_003fa3bc = DAT_003fa3bc + *(char *)(iVar2 + 0x1686a);
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < uVar11);
      }
      uVar4 = 0;
      bVar5 = DAT_003fa3bc;
      bVar13 = DAT_003fa3bc;
      if (uVar11 != 0) {
        do {
          iVar2 = uVar4 * 0x10;
          bVar14 = bVar13;
          if ((*(int *)(iVar2 + 0x16864) == iVar3) && (*(char *)(iVar2 + 0x16868) == '\x02')) {
            local_d0[uVar9] = (byte)uVar4;
            _DAT_003fa3ba = *(short *)(iVar2 + 0x16862);
            bVar10 = bVar5;
            if (_DAT_003fa3ba == 0x1800) {
              bVar14 = bVar13 + 1;
              bVar10 = bVar13;
            }
            *(uint *)(&DAT_003fce3c + uVar4 * 8) = iVar3 + (uint)bVar10 * 2 + 0x280;
            (&DAT_003fce40)[uVar4 * 8] = (char)(1 << (uVar8 * 2 & 0x3f));
            uVar9 = uVar9 + 1 & 0xff;
            bVar5 = bVar5 + *(char *)(iVar2 + 0x1686a);
          }
          uVar4 = uVar4 + 1 & 0xff;
          bVar13 = bVar14;
        } while (uVar4 < uVar11);
      }
      local_154._1_1_ = 0;
      uVar4 = 0;
      if (DAT_00016ab2 != 0) {
        do {
          if (*(int *)(uVar4 * 8 + 0x16a80) == iVar3) {
            iVar2 = uVar4 * 8;
            if (*(char *)(iVar2 + 0x16a84) == '\x01') {
              if (*(char *)(iVar2 + 0x16a85) == '\x01') {
LAB_0009a754:
                local_154._1_1_ = 1;
              }
            }
            else if ((*(char *)(iVar2 + 0x16a84) == '\x02') && (*(char *)(iVar2 + 0x16a85) == '\0'))
            goto LAB_0009a754;
          }
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < (uint)DAT_00016ab2 << 1);
      }
      uVar4 = 0;
      cVar6 = -1;
      if (uVar9 != 0) {
        do {
          iVar2 = (uint)local_d0[uVar4] * 0x10;
          bVar5 = *(byte *)(iVar2 + 0x1686a);
          bVar13 = *(byte *)(iVar2 + 0x16869);
          uVar12 = (ushort)bVar13;
          sVar1 = *(short *)(iVar2 + 0x16862);
          cVar7 = cVar6;
          if (sVar1 == 0x1800) {
            uVar11 = (uint)*(byte *)((*(byte *)(iVar2 + 0x1686b) >> 4) + 0x16ab4);
            bVar13 = 0;
            if (bVar5 != 0) {
              do {
                uVar15 = 0;
                if (uVar11 != 0) {
                  do {
                    bVar14 = *(byte *)((uint)local_d0[uVar15 + uVar4] * 0x10 + 0x16869);
                    uVar12 = (ushort)bVar14;
                    *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) = bVar14 | 0x40;
                    uVar16 = uVar16 + 1 & 0xff;
                    uVar15 = uVar15 + 1 & 0xff;
                  } while (uVar15 < uVar11);
                }
                *(ushort *)((int)&local_154 + uVar16 * 2) = uVar12 | 0x240;
                bVar13 = bVar13 + 1;
              } while (bVar13 < bVar5);
            }
            uVar4 = uVar4 + uVar11 + 0xff & 0xff;
          }
          else if (sVar1 == 0x1200) {
            bVar14 = 0;
            if (bVar5 != 0) {
              uVar11 = uVar16;
              do {
                *(ushort *)((int)&local_154 + (uVar11 + 1) * 2) = bVar13 & 0x3f | 0x40;
                uVar11 = uVar11 + 1 & 0xff;
                bVar14 = bVar14 + 1;
              } while (bVar14 < bVar5);
            }
            cVar7 = *(char *)(iVar2 + 0x1686b);
            if (cVar6 == cVar7) {
              if (bVar5 < 2) {
                *(ushort *)((int)&local_154 + uVar16 * 2) =
                     *(ushort *)((int)&local_154 + uVar16 * 2) & 0x3f | 0x40;
              }
              else {
                bVar13 = 1;
                do {
                  *(ushort *)((int)&local_154 + uVar16 * 2) =
                       *(ushort *)((int)&local_154 + uVar16 * 2) & 0x3f | 0x40;
                  uVar16 = uVar16 + 1 & 0xff;
                  bVar13 = bVar13 + 1;
                } while (bVar13 < bVar5);
              }
              *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) =
                   *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) | 0x240;
              uVar16 = uVar16 + 1 & 0xff;
            }
            else {
              *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) =
                   *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) | 0x240;
              uVar16 = uVar16 + 1 & 0xff;
              if (1 < bVar5) {
                bVar13 = 1;
                do {
                  *(ushort *)((int)&local_154 + uVar16 * 2) =
                       *(ushort *)((int)&local_154 + uVar16 * 2) & 0x3f | 0x40;
                  uVar16 = uVar16 + 1 & 0xff;
                  bVar13 = bVar13 + 1;
                } while (bVar13 < bVar5);
                *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) =
                     *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) | 0x240;
              }
            }
          }
          else if ((sVar1 == 0x1f00) || (sVar1 == 0xf00)) {
            uVar11 = 0;
            do {
              if (*(char *)((int)&local_60 + uVar11) == DAT_00016854) {
                unaff_r20 = uVar11;
              }
              uVar11 = uVar11 + 1 & 0xff;
            } while (uVar11 < 4);
            unaff_r20 = (unaff_r20 & 3) << 6 | 0x40;
            bVar14 = 0;
            if (bVar5 != 0) {
              do {
                *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) = (ushort)unaff_r20 | (ushort)bVar13
                ;
                uVar16 = uVar16 + 1 & 0xff;
                bVar14 = bVar14 + 1;
              } while (bVar14 < bVar5);
            }
          }
          else {
            bVar14 = 0;
            if (bVar5 != 0) {
              do {
                *(ushort *)((int)&local_154 + (uVar16 + 1) * 2) = bVar13 | 0x40;
                uVar16 = uVar16 + 1 & 0xff;
                bVar14 = bVar14 + 1;
              } while (bVar14 < bVar5);
            }
          }
          uVar4 = uVar4 + 1 & 0xff;
          cVar6 = cVar7;
        } while (uVar4 < uVar9);
      }
      FUN_0009a2f8(iVar3,&local_154);
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < DAT_00016ab2);
  }
  return;
}

