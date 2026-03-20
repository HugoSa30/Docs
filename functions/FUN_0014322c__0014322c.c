/*
 * Program: n42.bin
 * Function: FUN_0014322c
 * Entry: 0014322c
 * Exported by: ExportAllDecompiledFunctions.java
 */


void FUN_0014322c(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  int in_r8;
  byte bVar6;
  byte bVar7;
  uint in_r12;
  byte *unaff_r27;
  int unaff_r29;
  int iVar8;
  uint uVar9;
  
  while ((uVar1 = in_r12 & 0xff, uVar1 < *unaff_r27 && (uVar1 < 0xb))) {
    iVar8 = uVar1 * 0x28;
    if ((*(ushort *)(unaff_r29 + iVar8 + 2) & 1) == 1) {
      if ((((*(ushort *)(unaff_r29 + iVar8 + 4) & 1) != 1) &&
          (*(int *)((uint)(byte)(&DAT_001d44b1)
                                [(uint)(*(ushort *)(unaff_r29 + iVar8 + 4) >> 8) * 0xd] * 4 +
                   0x1bc2c) == in_r8)) && ((*(ushort *)(unaff_r29 + iVar8 + 2) >> 1 & 1) == 1)) {
        if (*(char *)(unaff_r29 + iVar8 + 6) != '\0') {
          pcVar5 = (char *)(unaff_r29 + iVar8 + 6);
          *pcVar5 = *pcVar5 + -1;
        }
        if (*(char *)(unaff_r29 + iVar8 + 6) == '\0') {
          iVar3 = unaff_r29 + iVar8;
          *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) & 0xfffe | 1;
          *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) & 0xfffd | 2;
          if ((&DAT_001d44b0)[(uint)(*(ushort *)(iVar3 + 4) >> 8) * 0xd] != '\0') {
            iVar3 = unaff_r29 + iVar8;
            *(ushort *)(iVar3 + 4) = *(ushort *)(iVar3 + 4) & 0xfff7 | 8;
            if ((&DAT_001d44b0)[(uint)(*(ushort *)(iVar3 + 4) >> 8) * 0xd] == '\x02') {
              *(ushort *)(unaff_r29 + iVar8 + 4) =
                   *(ushort *)(unaff_r29 + iVar8 + 4) & 0xffef | 0x10;
            }
          }
          *(undefined *)(unaff_r29 + iVar8 + 8) =
               (&DAT_001d44ba)[(uint)(*(ushort *)(unaff_r29 + iVar8 + 4) >> 8) * 0xd];
        }
      }
    }
    else if ((((*(ushort *)(unaff_r29 + iVar8 + 4) & 1) == 1) &&
             (*(int *)((uint)(byte)(&DAT_001d44b3)
                                   [(uint)(*(ushort *)(unaff_r29 + iVar8 + 4) >> 8) * 0xd] * 4 +
                      0x1bc2c) == in_r8)) && ((*(ushort *)(unaff_r29 + iVar8 + 2) >> 1 & 1) == 1)) {
      if (*(char *)(unaff_r29 + iVar8 + 7) != '\0') {
        pcVar5 = (char *)(unaff_r29 + iVar8 + 7);
        *pcVar5 = *pcVar5 + -1;
      }
      if (*(char *)(unaff_r29 + iVar8 + 7) == '\0') {
        iVar8 = unaff_r29 + iVar8;
        *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xfffe;
        *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xfff7;
        *(ushort *)(iVar8 + 4) = *(ushort *)(iVar8 + 4) & 0xffef;
        if (*(char *)(iVar8 + 8) == '\0') {
          *(undefined *)(unaff_r29 + uVar1 * 0x28) = 0;
          bVar7 = *unaff_r27;
          uVar9 = (uint)bVar7;
          uVar2 = uVar1;
          if (uVar9 - 1 == uVar1) {
            bVar6 = 0;
            puVar4 = (undefined *)(unaff_r29 + uVar1 * 0x28 + -1);
            do {
              puVar4 = puVar4 + 1;
              *puVar4 = 0;
              bVar6 = bVar6 + 1;
            } while (bVar6 < 0x28);
            *unaff_r27 = bVar7 - 1;
          }
          else {
            while ((uVar2 = uVar2 + 1 & 0xff, uVar2 < uVar9 && (uVar2 < 0xb))) {
              FUN_00155d4c(uVar2);
            }
            *unaff_r27 = (byte)(uVar9 + 0xff);
            bVar7 = 0;
            puVar4 = (undefined *)(unaff_r29 + (uVar9 + 0xff & 0xff) * 0x28 + -1);
            do {
              puVar4 = puVar4 + 1;
              *puVar4 = 0;
              bVar7 = bVar7 + 1;
            } while (bVar7 < 0x28);
          }
        }
      }
    }
    in_r12 = uVar1 + 1;
  }
  return;
}

